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
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "test_signals_ok", &test_signals_ok);
	test_add(&lst, "test_signals_ko", &test_signals_ko);
	test_add(&lst, "test_signals_print_ok", &test_signals_print_ok);
	test_add(&lst, "test_signals_print_ko", &test_signals_print_ko);
	test_add(&lst, "test_signals_buse", &test_signals_buse);
	test_add(&lst, "test_signals_abort", &test_signals_abort);
	test_add(&lst, "test_signals_fpe", &test_signals_fpe);
	test_add(&lst, "test_signals_timeout", &test_signals_timeout);
	test_add(&lst, "test_signals_segv", &test_signals_segv);
	tests_run(&lst);
	tests_del(&lst);
}
