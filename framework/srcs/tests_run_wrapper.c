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

void			process_status_wrapper(char *test_name, int *tests_passed,
					int status)
{
	if (!test_name || !tests_passed)
		exit(ut_putstr_error("process_status : NULL parameter\n"));
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			*tests_passed += 1;
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
** Run the parent process which waits for child status
*/

void			parent_process_wrapper(t_test_list *test_list,
					int *tests_passed)
{
	int		status;

	if (!test_list || !tests_passed)
		exit(ut_putstr_error("parent_process_wrapper : NULL parameter\n"));
	wait(&status);
	process_status_wrapper(test_list->test_name, tests_passed, status);
}

/*
** Run all the tests in the test list and output in wrapper format
*/

void			tests_run_wrapper(char *wrapper_name, t_test_list **test_list)
{
	t_test_list		*l;
	pid_t			pid;
	int				tests_passed;
	int				tests_total;

	tests_passed = 0;
	tests_total = 0;
	l = *test_list;
	ut_putstr_with_spaces(wrapper_name, 25);
	while ((*test_list))
	{
		pid = fork();
		if (pid < 0)
			exit(ut_putstr_error("test_run_wrapper : fork wrong pid\n"));
		else if (pid == 0)
			child_process(*test_list);
		else
			parent_process_wrapper(*test_list, &tests_passed);
		++tests_total;
		*test_list = (*test_list)->next;
	}
	ut_putscore_wrapper(tests_passed, tests_total);
	*test_list = l;
}
