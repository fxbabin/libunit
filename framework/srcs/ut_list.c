/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:42:47 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 21:15:44 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Create an element in the test list
*/

static t_ut_list		*ut_list_create(char *ut_name,
							int (*ut_function)(void))
{
	t_ut_list	*t;

	if (!ut_name || !ut_function)
		exit(ut_putstr_error("ut_create : NULL parameter\n"));
	if (!(t = (t_ut_list*)malloc(sizeof(t_ut_list))))
		exit(ut_putstr_error("ut_create : malloc failed\n"));
	t->ut_name = ut_name;
	t->ut_function = ut_function;
	t->next = NULL;
	return (t);
}

/*
** Add an element at the end of the test list.
*/

void					ut_list_add(t_ut_list **ut_list, char *ut_name,
								int (*ut_function)(void))
{
	t_ut_list		*tmp;

	if (!ut_list || !ut_name || !ut_function)
		exit(ut_putstr_error("ut_add : NULL parameter\n"));
	if (*ut_list)
	{
		tmp = *ut_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ut_list_create(ut_name, ut_function);
	}
	else
		*ut_list = ut_list_create(ut_name, ut_function);
}

/*
** Delete all elements in the test list
*/

void					ut_list_del(t_ut_list **ut_list)
{
	t_ut_list		*tmp;

	if (!ut_list)
		exit(ut_putstr_error("ut_del : NULL parameter\n"));
	while (*ut_list)
	{
		tmp = (*ut_list)->next;
		free(*ut_list);
		*ut_list = NULL;
		*ut_list = tmp;
	}
}

/*
** Run all the tests in the test list
*/

int						ut_list_run(t_ut_list **testlst)
{
	t_ut_list		*l;
	pid_t			pid;
	int				tests_passed;
	int				tests_total;

	tests_passed = 0;
	tests_total = 0;
	l = *testlst;
	while ((*testlst))
	{
		pid = fork();
		if (pid < 0)
			exit(ut_putstr_error("ut_run : fork returned a wrong pid\n"));
		else if (pid == 0)
			ut_child_process(*testlst);
		else
			ut_parent_process(*testlst, &tests_passed);
		++tests_total;
		*testlst = (*testlst)->next;
	}
	ut_use_display_total_fnt((void*)0)(tests_passed, tests_total);
	*testlst = l;
	return ((tests_passed == tests_total) ? 0 : -1);
}

/*
** Both run, then free given test list.
** Return 1 if a test failed, otherwise return 0.
*/

int						ut_launch_tests(t_ut_list **tests)
{
	int		result;

	result = ut_list_run(tests);
	ut_list_del(tests);
	return (result);
}
