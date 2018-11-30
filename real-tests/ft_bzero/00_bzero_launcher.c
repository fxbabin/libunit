/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_bzero_launcher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 23:26:52 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bzero_test.h"

void	bzero_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_bzero_simple_1", &test_bzero_simple_1);
	test_list_add(&test_list, "test_bzero_zero", &test_bzero_zero);
	test_list_add(&test_list, "test_bzero_null", &test_bzero_null);
	test_list_run(&test_list);
	test_list_del(&test_list);
}
