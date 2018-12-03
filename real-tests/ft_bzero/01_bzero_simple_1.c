/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_bzero_simple_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:40:08 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bzero_test.h"

int		test_bzero_simple_1(void)
{
	char	buff1[100];
	char	buff2[100];

	buff1[0] = 'A';
	buff2[0] = 'A';
	bzero(buff1, 3);
	ft_bzero(buff2, 3);
	if (memcmp(buff1, buff2, 3) == 0)
		return (0);
	else
		return (-1);
}
