/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memcpy_simple_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:44:52 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		test_memcpy_simple_1(void)
{
	char	buff1[100];
	char	buff2[100];

	buff1[3] = '\0';
	buff2[3] = '\0';
	memcpy(buff1, "toto", 3);
	ft_memcpy(buff2, "toto", 3);
	if (memcmp(buff1, buff2, 4) == 0)
		return (0);
	else
		return (-1);
}
