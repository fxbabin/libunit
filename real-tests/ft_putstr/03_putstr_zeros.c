/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strcat_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:57:14 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:12:51 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

int		test_putstr_zeros(void)
{
	int		stdout_fd;
	int		p_fd[2];
	char	buff1[100];

	memset(buff1, 'V', 100);
	stdout_fd = ut_get_stdout_fd(p_fd);
	ft_putstr("\0\0\0");
	ut_get_stdout_buffer(100, buff1, stdout_fd, p_fd);
	if (memcmp(buff1, "", 1) == 0)
		return (0);
	else
		return (-1);
}
