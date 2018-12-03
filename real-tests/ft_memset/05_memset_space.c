/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_memset_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:03:00 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		test_memset_space(void)
{
	char	buff1[100];
	char	buff2[100];

	buff2[0] = '\t';
	buff2[2] = '\t';
	memset(buff1, 255, 3);
	ft_memset(buff2, 255, 3);
	if (memcmp(buff1, buff2, 3) == 0)
		return (0);
	else
		return (-1);
}
