/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_run_wrapper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:44:22 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:19:57 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Write the result of a test in the wrapper format
** ex : ".KSF"
*/

static void		ut_puttest_result_wrapper(char *color_code, char *result)
{
	ut_putstr(color_code);
	ut_putstr(result);
	ut_putstr(T_RESET);
}

/*
** Write the result of a test in the wrapper format depending on the test signal
*/

void			ut_display_test_wrapper(char *ut_name, int status)
{
	if (!ut_name)
		exit(ut_putstr_error("process_status : NULL parameter\n"));
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			ut_puttest_result_wrapper(T_LGREEN, ".");
		}
		else if (WEXITSTATUS(status) == SIGALRM)
			ut_puttest_result_wrapper(T_RED, "T");
		else
			ut_puttest_result_wrapper(T_LRED, "K");
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ut_puttest_result_wrapper(T_RED, "S");
		else if (WTERMSIG(status) == SIGBUS)
			ut_puttest_result_wrapper(T_RED, "B");
		else if (WTERMSIG(status) == SIGABRT)
			ut_puttest_result_wrapper(T_RED, "A");
		else if (WTERMSIG(status) == SIGFPE)
			ut_puttest_result_wrapper(T_RED, "F");
	}
}

/*
** Write the result of a test in the wrapper format depending on the test signal
*/

static void		ut_process_status_wrapper(char *ut_name, int *tests_passed,
					int status)
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
	ut_use_display_test_fnt((void*)0)(ut_name, *tests_passed);
}

/*
** Run the parent process which waits for child status
*/

void			ut_parent_process_wrapper(t_ut_list *ut_list,
					int *tests_passed)
{
	int		status;

	if (!ut_list || !tests_passed)
		exit(ut_putstr_error("parent_process_wrapper : NULL parameter\n"));
	wait(&status);
	ut_process_status_wrapper(ut_list->ut_name, tests_passed, status);
}

/*
** Run all the tests in the test list and output in wrapper format
*/

int				ut_list_run_wrapper(char *wrapper_name, t_ut_list **ut_list)
{
	t_ut_list		*l;
	pid_t			pid;
	int				tests_passed;
	int				tests_total;

	tests_passed = 0;
	tests_total = 0;
	l = *ut_list;
	ut_putstr_with_spaces(wrapper_name, 25);
	while ((*ut_list))
	{
		pid = fork();
		if (pid < 0)
			exit(ut_putstr_error("ut_run_wrapper : fork wrong pid\n"));
		else if (pid == 0)
			ut_child_process(*ut_list);
		else
			ut_parent_process_wrapper(*ut_list, &tests_passed);
		++tests_total;
		*ut_list = (*ut_list)->next;
	}
	ut_putscore_wrapper(tests_passed, tests_total);
	*ut_list = l;
	return ((tests_passed == tests_total) ? 0 : -1);
}
