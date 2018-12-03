/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_memcpy_null_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:55:22 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		test_memcpy_null_2(void)
{
	char	buff1[100];
	char	buff2[100];

	memset(buff1, '\0', 50);
	memset(buff2, '\0', 50);
	memcpy(buff1, NULL, 0);
	ft_memcpy(buff2, NULL, 0);
	if (memcmp(buff1, buff2, 50) == 0)
		return (0);
	else
		return (-1);
}
