/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_random_formula_launcher.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:16:03 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:18:43 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "random_formula_test.h"

void	random_formula_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("RANDOM_FORMULA :\n");
	ut_list_add(&ut_list, "test_random_formula_fpe", &test_random_formula_fpe);
	ut_list_run(&ut_list);
	ut_list_del(&ut_list);
}
