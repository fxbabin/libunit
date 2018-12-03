/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memcpy_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:11:50 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		memcpy_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("FT_MEMCPY :\n");
	ut_list_add(&ut_list, "test_memcpy_simple_1", &test_memcpy_simple_1);
	ut_list_add(&ut_list, "test_memcpy_simple_2", &test_memcpy_simple_2);
	ut_list_add(&ut_list, "test_memcpy_null_1", &test_memcpy_null_1);
	ut_list_add(&ut_list, "test_memcpy_null_2", &test_memcpy_null_2);
	return (ut_launch_tests(&ut_list));
}
