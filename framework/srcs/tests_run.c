/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 17:17:03 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	exit_timeout(int sig)
{
	(void)sig;
	exit(SIGALRM);
}

void	child_process(t_test *test)
{
	signal(SIGALRM, exit_timeout);
	alarm(1);
	exit((test->test() == 0) ? 0 : -1);
}

void	process_status(char *test_name, int status, int *n_pass)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			*n_pass += 1;
			ut_putsig(test_name, TLGREEN, "OK");
		}
		else if (WEXITSTATUS(status) == SIGALRM)
			ut_putsig(test_name, TRED, "TIMEOUT");
		else
			ut_putsig(test_name, TLRED, "KO");
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ut_putsig(test_name, TRED, "SEGV");
		else if (WTERMSIG(status) == SIGBUS)
			ut_putsig(test_name, TRED, "BUSE");
		else if (WTERMSIG(status) == SIGABRT)
			ut_putsig(test_name, TRED, "ABORT");
		else if (WTERMSIG(status) == SIGFPE)
			ut_putsig(test_name, TRED, "FPE");
	}
}

void	parent_process(t_test *test, int *n_pass)
{
	int		status;

	wait(&status);
	process_status(test->name, status, n_pass);
}

void	tests_run(t_test **testlst)
{
	t_test		*l;
	pid_t		pid;
	int			n_pass;
	int			n_tot;

	n_pass = 0;
	n_tot = 0;
	l = *testlst;
	while ((*testlst))
	{
		pid = fork();
		if (pid == 0)
			child_process(*testlst);
		else
			parent_process(*testlst, &n_pass);
		++n_tot;
		*testlst = (*testlst)->next;
	}
	ut_putscore(n_pass, n_tot);
	*testlst = l;
}
