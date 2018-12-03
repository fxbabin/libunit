/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:37:58 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:39:43 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"

void	strlen_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("STRLEN :\n");
	ut_list_add(&ut_list, "test_strlen_segv", &test_strlen_segv);
	ut_list_run(&ut_list);
	ut_list_del(&ut_list);
}
