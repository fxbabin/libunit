/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcat_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:16:03 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:35:57 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcat_test.h"

void	strcat_launcher(void)
{
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "test_strcat_simple_1", &test_strcat_simple_1);
	test_add(&lst, "test_strcat_simple_ko", &test_strcat_simple_ko);
	test_add(&lst, "test_strcat_null", &test_strcat_null);
	test_add(&lst, "test_strcat_buse", &test_strcat_buse);
	tests_run_wrapper("ddd", &lst);
	tests_del(&lst);
}
