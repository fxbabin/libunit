/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_memset_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:04:09 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		test_memset_null(void)
{
	char	buff1[100];
	char	buff2[100];

	memset(buff1, '\0', 50);
	memset(buff2, '\0', 50);
	memset(buff1, 'x', 0);
	ft_memset(buff2, 'x', 0);
	if (memcmp(buff1, buff2, 50) == 0)
		return (0);
	else
		return (-1);
}
