/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memset_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:12:33 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		memset_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("FT_MEMSET :\n");
	ut_list_add(&ut_list, "test_memset_simple_1", &test_memset_simple_1);
	ut_list_add(&ut_list, "test_memset_tab", &test_memset_tab);
	ut_list_add(&ut_list, "test_memset_newline", &test_memset_newline);
	ut_list_add(&ut_list, "test_memset_zero", &test_memset_zero);
	ut_list_add(&ut_list, "test_memset_space", &test_memset_space);
	ut_list_add(&ut_list, "test_memset_null", &test_memset_null);
	return (ut_launch_tests(&ut_list));
}
