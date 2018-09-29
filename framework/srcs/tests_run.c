/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/04/16 22:28:13 by fbabin           ###   ########.fr       */
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

void	process_status(char *test_name, int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, LGREEN, "OK", RESET);
		else if (WEXITSTATUS(status) == SIGALRM)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "TIMEOUT", RESET);
		else
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, LRED, "KO", RESET);
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "SEGV", RESET);
		else if (WTERMSIG(status) == SIGBUS)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "BUSE", RESET);
		else if (WTERMSIG(status) == SIGABRT)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "ABORT", RESET);
		else if (WTERMSIG(status) == SIGFPE)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "FPE", RESET);
	}
}

void	parent_process(t_test *test)
{
	int		status;

	wait(&status);
	process_status(test->name, status);
}

void	tests_run(t_test **testlst)
{
	t_test		*l;
	pid_t		pid;

	l = *testlst;
	while ((*testlst))
	{
		pid = fork();
		if (pid == 0)
			child_process(*testlst);
		else
			parent_process(*testlst);
		*testlst = (*testlst)->next;
	}
	*testlst = l;
}
