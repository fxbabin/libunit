/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putnbr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:13:24 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putnbr_test.h"

int		putnbr_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("FT_PUTNBR :\n");
	ut_list_add(&ut_list, "test_putnbr_int_min", &test_putnbr_int_min);
	ut_list_add(&ut_list, "test_putnbr_m_20", &test_putnbr_m_20);
	ut_list_add(&ut_list, "test_putnbr_zero", &test_putnbr_zero);
	ut_list_add(&ut_list, "test_putnbr_one", &test_putnbr_one);
	ut_list_add(&ut_list, "test_putnbr_p_20", &test_putnbr_p_20);
	ut_list_add(&ut_list, "test_putnbr_int_max", &test_putnbr_int_max);
	return (ut_launch_tests(&ut_list));
}
