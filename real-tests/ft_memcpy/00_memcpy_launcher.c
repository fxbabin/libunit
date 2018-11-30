/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memcpy_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 20:08:45 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

void	memcpy_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_memcpy_simple_1", &test_memcpy_simple_1);
	test_list_add(&test_list, "test_memcpy_simple_2", &test_memcpy_simple_2);
	test_list_add(&test_list, "test_memcpy_null_1", &test_memcpy_null_1);
	test_list_add(&test_list, "test_memcpy_null_2", &test_memcpy_null_2);
	test_list_run(&test_list);
	test_list_del(&test_list);
}
