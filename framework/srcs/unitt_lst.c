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

#include "mem.h"
#include "libunit.h"

t_unitt		*ft_unitt_create(char *test_name, int (*test)(void))
{
	t_unitt	*t;

	if (!(t = (t_unitt*)ft_memalloc(sizeof(t_unitt))))
		return (NULL);
	t->name = test_name;
	t->test = test;
	t->next = NULL;
	return (t);
}

void		ft_unitt_push(t_unitt **unitt_lst, char *test_name, int (*test)(void))
{
	t_unitt		*tmp;

	if (!unitt_lst)
		return ;
	if (*unitt_lst)
	{
		tmp = *unitt_lst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_unitt_create(test_name, test);
	}
	else
		*unitt_lst = ft_unitt_create(test_name, test);
}

void	ft_unitt_del(t_unitt **unitt_lst)
{
	t_unitt		*tmp;

	if (!unitt_lst || !del)
		return ;
	while (*unitt_lst)
	{
		tmp = (*unitt_lst)->next;
		free(*unitt_lst);
		*unitt_lst = NULL;
		*unitt_lst = tmp;
	}
}
