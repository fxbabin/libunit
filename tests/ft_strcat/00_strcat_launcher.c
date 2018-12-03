/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcat_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:22:53 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:25:05 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcat_test.h"

void	strcat_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("STRCAT :\n");
	ut_list_add(&ut_list, "test_strcat_ok", &test_strcat_ok);
	ut_list_run(&ut_list);
	ut_list_del(&ut_list);
}
