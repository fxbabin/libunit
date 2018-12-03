/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_memcpy_simple_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:48:50 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		test_memcpy_simple_2(void)
{
	char	buff1[100];
	char	buff2[100];

	memcpy(buff1, "000000000", 10);
	ft_memcpy(buff2, "000000000", 10);
	if (memcmp(buff1, buff2, 10) == 0)
		return (0);
	else
		return (-1);
}
