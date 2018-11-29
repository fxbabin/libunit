/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_bzero_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 20:08:45 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bzero_test.h"

void	bzero_launcher(void)
{
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "test_bzero_simple_1", &test_bzero_simple_1);
	test_add(&lst, "test_bzero_zero", &test_bzero_zero);
	test_add(&lst, "test_bzero_null", &test_bzero_null);
	tests_run(&lst);
	tests_del(&lst);
}
