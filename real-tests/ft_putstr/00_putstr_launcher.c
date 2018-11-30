/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:39:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:45:41 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

void	putstr_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_putstr_simple_1", &test_putstr_simple_1);
	test_list_add(&test_list, "test_putstr_null", &test_putstr_null);
	test_list_add(&test_list, "test_putstr_zeros", &test_putstr_zeros);
	test_list_run(&test_list);
	test_list_del(&test_list);
}
