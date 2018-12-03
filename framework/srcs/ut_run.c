/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:44:02 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 21:27:29 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Exit the test if the timeout alarm ring
*/

static void		ut_exit_timeout(int sig)
{
	(void)sig;
	exit(SIGALRM);
}

/*
** Run the test in the child process
*/

void			ut_child_process(t_ut_list *ut_list)
{
	if (!ut_list)
		exit(ut_putstr_error("child_process : NULL parameter\n"));
	signal(SIGALRM, ut_exit_timeout);
	alarm(T_TIMEOUT_DELAY);
	exit((ut_list->ut_function() == 0) ? 0 : -1);
}

/*
** Write the result of a test depending on the test signal
*/

void			ut_display_test(char *ut_name, int status)
{
	if (!ut_name)
		exit(ut_putstr_error("process_status : NULL parameter\n"));
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			ut_puttest_result(ut_name, T_LGREEN, "OK");
		}
		else if (WEXITSTATUS(status) == SIGALRM)
			ut_puttest_result(ut_name, T_RED, "TIMEOUT");
		else
			ut_puttest_result(ut_name, T_LRED, "KO");
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ut_puttest_result(ut_name, T_RED, "SEGV");
		else if (WTERMSIG(status) == SIGBUS)
			ut_puttest_result(ut_name, T_RED, "BUSE");
		else if (WTERMSIG(status) == SIGABRT)
			ut_puttest_result(ut_name, T_RED, "ABORT");
		else if (WTERMSIG(status) == SIGFPE)
			ut_puttest_result(ut_name, T_RED, "FPE");
	}
}

/*
** Write the result of a test depending on the test signal
*/

static void		ut_process_status(char *ut_name, int status, int *tests_passed)
{
	if (!ut_name || !tests_passed)
		exit(ut_putstr_error("process_status : NULL parameter\n"));
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			*tests_passed += 1;
		}
	}
	ut_use_display_test_fnt((void*)0)(ut_name, status);
}

/*
** Run the parent process which waits for child status
*/

void			ut_parent_process(t_ut_list *test, int *tests_passed)
{
	int		status;

	wait(&status);
	ut_process_status(test->ut_name, status, tests_passed);
}
