/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_signals_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:16:03 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:16:21 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signals_test.h"

void	signals_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_signals_ok", &test_signals_ok);
	test_list_add(&test_list, "test_signals_ko", &test_signals_ko);
	test_list_add(&test_list, "test_signals_print_ok", &test_signals_print_ok);
	test_list_add(&test_list, "test_signals_print_ko", &test_signals_print_ko);
	test_list_add(&test_list, "test_signals_buse", &test_signals_buse);
	test_list_add(&test_list, "test_signals_abort", &test_signals_abort);
	test_list_add(&test_list, "test_signals_fpe", &test_signals_fpe);
	test_list_add(&test_list, "test_signals_timeout", &test_signals_timeout);
	test_list_add(&test_list, "test_signals_segv", &test_signals_segv);
	test_list_run(&test_list);
	test_list_del(&test_list);
}
