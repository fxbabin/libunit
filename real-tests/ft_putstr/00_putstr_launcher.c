/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:39:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:13:42 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

int		putstr_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("FT_PUTSTR :\n");
	ut_list_add(&ut_list, "test_putstr_simple_1", &test_putstr_simple_1);
	ut_list_add(&ut_list, "test_putstr_null", &test_putstr_null);
	ut_list_add(&ut_list, "test_putstr_zeros", &test_putstr_zeros);
	return (ut_launch_tests(&ut_list));
}
