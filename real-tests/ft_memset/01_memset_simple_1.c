/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memset_simple_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:56:53 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		test_memset_simple_1(void)
{
	char	buff1[100];
	char	buff2[100];

	buff1[3] = 'P';
	buff2[3] = 'P';
	memset(buff1, 'c', 3);
	ft_memset(buff2, 'c', 3);
	if (memcmp(buff1, buff2, 4) == 0)
		return (0);
	else
		return (-1);
}
