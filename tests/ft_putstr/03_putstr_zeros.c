/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strcat_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:57:14 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 16:57:48 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

int		test_putstr_zeros(void)
{
	int		stdout_fd;
	int		p_fd[2];
	char	buff1[100];

	stdout_fd = get_stdout_fd(p_fd);
	ft_putstr("\0\0\0");
	get_stdout_buffer(100, buff1, stdout_fd, p_fd);
	if (strcmp(buff1, "") == 0)
		return (0);
	else
		return (-1);
}
