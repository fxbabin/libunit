/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_signals_print_ko.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:00:58 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 17:05:18 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signals_test.h"

int		test_signals_print_ko(void)
{
	int		stdout_fd;
	int		p_fd[2];
	char	buff1[100];

	stdout_fd = get_stdout_fd(p_fd);
	ft_putstr("hello");
	get_stdout_buffer(100, buff1, stdout_fd, p_fd);
	if (strcmp(buff1, "hell") == 0)
		return (0);
	else
		return (-1);
}
