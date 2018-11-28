/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_run_wrapper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:44:22 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:11:20 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ut_putsig_w(char *col1, char *text)
{
	ut_putstr(col1);
	ut_putstr(text);
	ut_putstr(TRESET);
}

void	process_status_wrapper(char *test_name, int *nb_pass, int status)
{
	if (!test_name || !nb_pass)
		exit(ut_putstr_err("process_status : NULL parameter\n"));
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			*nb_pass += 1;
			ut_putsig_w(TLGREEN, ".");
		}
		else if (WEXITSTATUS(status) == SIGALRM)
			ut_putsig_w(TRED, "T");
		else
			ut_putsig_w(TLRED, "K");
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ut_putsig_w(TRED, "S");
		else if (WTERMSIG(status) == SIGBUS)
			ut_putsig_w(TRED, "B");
		else if (WTERMSIG(status) == SIGABRT)
			ut_putsig_w(TRED, "A");
		else if (WTERMSIG(status) == SIGFPE)
			ut_putsig_w(TRED, "F");
	}
}

void	parent_process_wrapper(t_test *test, int *nb_pass)
{
	int		status;

	if (!test || !nb_pass)
		exit(ut_putstr_err("parent_process_wrapper : NULL parameter\n"));
	wait(&status);
	process_status_wrapper(test->name, nb_pass, status);
}

void	tests_run_wrapper(char *wname, t_test **testlst)
{
	t_test		*l;
	pid_t		pid;
	int			n_pass;
	int			n_tot;

	n_pass = 0;
	n_tot = 0;
	l = *testlst;
	ut_putstr_wild(wname, 25);
	while ((*testlst))
	{
		pid = fork();
		if (pid < 0)
			exit(ut_putstr_err("test_run_wrapper : fork returned wrong pid\n"));
		else if (pid == 0)
			child_process(*testlst);
		else
			parent_process_wrapper(*testlst, &n_pass);
		++n_tot;
		*testlst = (*testlst)->next;
	}
	ut_putscore_wrapper(n_pass, n_tot);
	*testlst = l;
}
