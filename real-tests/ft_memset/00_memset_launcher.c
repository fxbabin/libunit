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
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "test_memset_simple_1", &test_memset_simple_1);
	test_add(&lst, "test_memset_tab", &test_memset_tab);
	test_add(&lst, "test_memset_newline", &test_memset_newline);
	test_add(&lst, "test_memset_zero", &test_memset_zero);
	test_add(&lst, "test_memset_space", &test_memset_space);
	test_add(&lst, "test_memset_null", &test_memset_null);
	tests_run(&lst);
	tests_del(&lst);
}
