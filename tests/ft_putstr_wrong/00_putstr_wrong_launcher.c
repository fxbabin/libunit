/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putstr_wrong_launcher.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:15:56 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/04 20:00:36 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_wrong_test.h"

void	putstr_wrong_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("PUTSTR_WRONG :\n");
	ut_list_add(&ut_list, "test_putstr_wrong_print_ko",
		&test_putstr_wrong_print_ko);
	ut_list_run(&ut_list);
	ut_list_del(&ut_list);
}
