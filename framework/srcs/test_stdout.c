/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 18:49:59 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		get_stdout_fd(int *p_fd)
{
	int		stdout_fd;

	stdout_fd = dup(STDOUT_FILENO);
	pipe(p_fd);
	dup2(p_fd[1], STDOUT_FILENO);
	close(p_fd[1]);
	return (stdout_fd);
}

char	*get_stdout_buffer(int buff_size, char *buff_out, int stdout_fd,
			int *p_fd)
{
	int		ret;

	dup2(stdout_fd, STDOUT_FILENO);
	ret = read(p_fd[0], buff_out, buff_size);
	buff_out[ret] = '\0';
	close(p_fd[0]);
	close(stdout_fd);
	return (buff_out);
}
