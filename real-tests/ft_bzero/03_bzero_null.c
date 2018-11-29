/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bzero_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 16:23:45 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bzero_test.h"

int		test_bzero_null(void)
{
	char	buff1[100];
	char	buff2[100];

	buff1[0] = 'A';
	buff2[0] = 'A';
	bzero(NULL, 0);
	ft_bzero(NULL, 0);
	if (strcmp(buff1, buff2) == 0)
		return (0);
	else
		return (-1);
}
