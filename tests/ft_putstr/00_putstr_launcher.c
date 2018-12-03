/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:11:03 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:13:01 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

void	putstr_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("PUTSTR :\n");
	ut_list_add(&ut_list, "test_putstr_print_ok", &test_putstr_print_ok);
	ut_list_run(&ut_list);
	ut_list_del(&ut_list);
}
