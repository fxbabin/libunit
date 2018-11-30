/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:44:02 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:12:05 by fbabin           ###   ########.fr       */
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
	if (!test)
		exit(ut_putstr_err("child_process : NULL parameter\n"));
	signal(SIGALRM, exit_timeout);
	alarm(T_TIMEOUT);
	exit((test->test() == 0) ? 0 : -1);
}

void	process_status(char *test_name, int status, int *n_pass)
{
	if (!test_name || !n_pass)
		exit(ut_putstr_err("process_status : NULL parameter\n"));
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
		if (pid < 0)
			exit(ut_putstr_err("test_run : fork returned a wrong pid\n"));
		else if (pid == 0)
			child_process(*testlst);
		else
			parent_process(*testlst, &n_pass);
		++n_tot;
		*testlst = (*testlst)->next;
	}
	ut_putscore(n_pass, n_tot);
	*testlst = l;
}
