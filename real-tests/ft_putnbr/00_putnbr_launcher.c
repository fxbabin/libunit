/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putnbr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 20:08:45 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putnbr_test.h"

void	putnbr_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_putnbr_int_min", &test_putnbr_int_min);
	test_list_add(&test_list, "test_putnbr_m_20", &test_putnbr_m_20);
	test_list_add(&test_list, "test_putnbr_zero", &test_putnbr_zero);
	test_list_add(&test_list, "test_putnbr_one", &test_putnbr_one);
	test_list_add(&test_list, "test_putnbr_p_20", &test_putnbr_p_20);
	test_list_add(&test_list, "test_putnbr_int_max", &test_putnbr_int_max);
	test_list_run(&test_list);
	test_list_del(&test_list);
}
