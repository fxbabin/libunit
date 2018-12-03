/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_fibonacci_launcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:06:21 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:10:29 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fibonacci_test.h"

void	fibonacci_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("TIMEOUT :\n");
	ut_list_add(&ut_list, "test_fibonacci_timeout", &test_fibonacci_timeout);
	ut_list_run(&ut_list);
	ut_list_del(&ut_list);
}
