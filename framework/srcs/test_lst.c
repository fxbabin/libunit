/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/04/16 22:28:13 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/mem.h"
#include "libunit.h"

t_test		*test_create(char *test_name, int (*test)(void))
{
	t_test	*t;

	if (!(t = (t_test*)ft_memalloc(sizeof(t_test))))
		return (NULL);
	t->name = test_name;
	t->test = test;
	t->next = NULL;
	return (t);
}

void		test_add(t_test **test_lst, char *test_name, int (*test)(void))
{
	t_test		*tmp;

	if (!test_lst)
		return ;
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

void	tests_del(t_test **test_lst)
{
	t_test		*tmp;

	if (!test_lst)
		return ;
	while (*test_lst)
	{
		tmp = (*test_lst)->next;
		free(*test_lst);
		*test_lst = NULL;
		*test_lst = tmp;
	}
}
