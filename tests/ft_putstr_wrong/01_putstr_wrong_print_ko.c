/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_putstr_wrong_print_ko.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:17:51 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:18:17 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_wrong_test.h"

int		test_putstr_wrong_print_ko(void)
{
	int		stdout_fd;
	int		p_fd[2];
	char	buff1[100];

	buff1[0] = '\0';
	stdout_fd = ut_get_stdout_fd(p_fd);
	ft_putstr_wrong("hello");
	ut_get_stdout_buffer(100, buff1, stdout_fd, p_fd);
	if (strcmp(buff1, "hell") == 0)
		return (0);
	else
		return (-1);
}
