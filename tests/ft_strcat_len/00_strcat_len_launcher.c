/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcat_len_launcher.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:16:03 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:18:43 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcat_len_test.h"

void	strcat_len_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("STRCAT_LEN :\n");
	ut_list_add(&ut_list, "test_strcat_len_buse", &test_strcat_len_buse);
	ut_list_run(&ut_list);
	ut_list_del(&ut_list);
}
