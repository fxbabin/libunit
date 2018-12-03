/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memset_newline.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:58:44 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		test_memset_newline(void)
{
	char	buff1[100];
	char	buff2[100];

	memset(buff1, '\n', 3);
	ft_memset(buff2, '\n', 3);
	if (memcmp(buff1, buff2, 3) == 0)
		return (0);
	else
		return (-1);
}
