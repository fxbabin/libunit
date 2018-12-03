/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_memset_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:58:06 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		test_memset_tab(void)
{
	char	buff1[100];
	char	buff2[100];

	buff1[77] = '\f';
	buff2[77] = '\f';
	memset((char*)&buff1, '\t', 77);
	ft_memset((char*)&buff2, '\t', 77);
	if (memcmp(buff1, buff2, 78) == 0)
		return (0);
	else
		return (-1);
}
