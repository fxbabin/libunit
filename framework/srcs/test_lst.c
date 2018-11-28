/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:42:47 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 22:49:19 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_test		*test_create(char *test_name, int (*test)(void))
{
	t_test	*t;

	if (!test_name || !test)
		exit(ut_putstr_err("test_create : NULL parameter\n"));
	if (!(t = (t_test*)malloc(sizeof(t_test))))
		exit(ut_putstr_err("test_create : malloc failed\n"));
	t->name = test_name;
	t->test = test;
	t->next = NULL;
	return (t);
}

void		test_add(t_test **test_lst, char *test_name, int (*test)(void))
{
	t_test		*tmp;

	if (!test_lst || !test_name || !test)
		exit(ut_putstr_err("test_add : NULL parameter\n"));
	if (*test_lst)
	{
		tmp = *test_lst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = test_create(test_name, test);
	}
	else
		*test_lst = test_create(test_name, test);
}

void		tests_del(t_test **test_lst)
{
	t_test		*tmp;

	if (!test_lst)
		exit(ut_putstr_err("test_del : NULL parameter\n"));
	while (*test_lst)
	{
		tmp = (*test_lst)->next;
		free(*test_lst);
		*test_lst = NULL;
		*test_lst = tmp;
	}
}
