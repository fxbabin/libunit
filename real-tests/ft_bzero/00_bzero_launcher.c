/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_bzero_launcher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:11:27 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bzero_test.h"

int		bzero_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("FT_BZERO :\n");
	ut_list_add(&ut_list, "test_bzero_simple_1", &test_bzero_simple_1);
	ut_list_add(&ut_list, "test_bzero_zero", &test_bzero_zero);
	ut_list_add(&ut_list, "test_bzero_null", &test_bzero_null);
	return (ut_launch_tests(&ut_list));
}
