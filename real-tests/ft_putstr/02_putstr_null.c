/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcat_simple_ko.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:51:41 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:06:33 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

int		test_putstr_null(void)
{
	int		stdout_fd;
	int		p_fd[2];
	char	buff1[100];

	bzero(buff1, 100);
	stdout_fd = ut_get_stdout_fd(p_fd);
	ft_putstr(NULL);
	ut_get_stdout_buffer(100, buff1, stdout_fd, p_fd);
	if (strcmp(buff1, "(null)") == 0)
		return (0);
	else
		return (-1);
}
