/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_putstr_print_ok.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:14:50 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:15:09 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

int		test_putstr_print_ok(void)
{
	int		stdout_fd;
	int		p_fd[2];
	char	buff1[100];

	buff1[0] = '\0';
	stdout_fd = ut_get_stdout_fd(p_fd);
	ft_putstr("hello");
	ut_get_stdout_buffer(100, buff1, stdout_fd, p_fd);
	if (strcmp(buff1, "hello") == 0)
		return (0);
	else
		return (-1);
}
