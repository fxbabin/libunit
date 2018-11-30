/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memset_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 20:08:45 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

void	memset_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_memset_simple_1", &test_memset_simple_1);
	test_list_add(&test_list, "test_memset_tab", &test_memset_tab);
	test_list_add(&test_list, "test_memset_newline", &test_memset_newline);
	test_list_add(&test_list, "test_memset_zero", &test_memset_zero);
	test_list_add(&test_list, "test_memset_space", &test_memset_space);
	test_list_add(&test_list, "test_memset_null", &test_memset_null);
	test_list_run(&test_list);
	test_list_del(&test_list);
}
