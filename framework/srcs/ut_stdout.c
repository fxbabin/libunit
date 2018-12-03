/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_stdout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:44:42 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 21:11:02 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Pipe stdout in a file descriptor
*/

int		ut_get_stdout_fd(int *p_fd)
{
	int		stdout_fd;

	if (!p_fd)
		exit(ut_putstr_error("get_stdout : NULL parameter\n"));
	if ((stdout_fd = dup(STDOUT_FILENO)) < 0)
		exit(ut_putstr_error("Error: get_stdout :: stdout_fd < 0\n"));
	pipe(p_fd);
	dup2(p_fd[1], STDOUT_FILENO);
	close(p_fd[1]);
	return (stdout_fd);
}

/*
** Store input stdout (file descriptor) in a given buffer
*/

char	*ut_get_stdout_buffer(int buff_size, char *buff_out, int stdout_fd,
			int *p_fd)
{
	int		ret;

	if (!buff_out || !p_fd)
		exit(ut_putstr_error("get_stdout_buffer : NULL parameter\n"));
	if (stdout_fd < 0)
		exit(ut_putstr_error("get_stdout_buffer : stdout_fd < 0\n"));
	dup2(stdout_fd, STDOUT_FILENO);
	if ((ret = read(p_fd[0], buff_out, buff_size)) < 0)
		exit(ut_putstr_error("get_stdout_buffer : invalid read\n"));
	buff_out[ret] = '\0';
	close(p_fd[0]);
	close(stdout_fd);
	return (buff_out);
}
