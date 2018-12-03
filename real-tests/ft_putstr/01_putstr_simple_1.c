/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_putstr_simple_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:46:06 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:06:05 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

int		test_putstr_simple_1(void)
{
	int		stdout_fd;
	int		p_fd[2];
	char	buff1[100];

	bzero(buff1, 100);
	stdout_fd = ut_get_stdout_fd(p_fd);
	ft_putstr("hello");
	ut_get_stdout_buffer(100, buff1, stdout_fd, p_fd);
	if (strcmp(buff1, "hello") == 0)
		return (0);
	else
		return (-1);
}
