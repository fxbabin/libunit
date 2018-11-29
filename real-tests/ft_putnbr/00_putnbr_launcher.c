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
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "test_putnbr_int_min", &test_putnbr_int_min);
	test_add(&lst, "test_putnbr_m_20", &test_putnbr_m_20);
	test_add(&lst, "test_putnbr_zero", &test_putnbr_zero);
	test_add(&lst, "test_putnbr_one", &test_putnbr_one);
	test_add(&lst, "test_putnbr_p_20", &test_putnbr_p_20);
	test_add(&lst, "test_putnbr_int_max", &test_putnbr_int_max);
	tests_run(&lst);
	tests_del(&lst);
}
