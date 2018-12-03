/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_memset_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:00:12 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		test_memset_zero(void)
{
	char	buff1[1];
	char	buff2[1];

	buff1[0] = '1';
	buff2[0] = '1';
	memset(buff1, '\0', 0);
	ft_memset(buff2, '\0', 0);
	if (memcmp(buff1, buff2, 1) == 0)
		return (0);
	else
		return (-1);
}
