/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:39:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:45:41 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

void	putstr_launcher(void)
{
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "test_putstr_simple_1", &test_putstr_simple_1);
	test_add(&lst, "test_putstr_null", &test_putstr_null);
	test_add(&lst, "test_putstr_zeros", &test_putstr_zeros);
	tests_run(&lst);
	tests_del(&lst);
}
