/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memcpy_simple_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 16:23:45 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		test_memcpy_simple_1(void)
{
	char	buff1[100];
	char	buff2[100];

	memcpy((char*)&buff1, "toto", 3);
	ft_memcpy((char*)&buff2, "toto", 3);
	if (strcmp(buff1, buff2) == 0)
		return (0);
	else
		return (-1);
}
