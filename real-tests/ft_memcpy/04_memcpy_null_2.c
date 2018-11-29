/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_memcpy_null_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 23:29:42 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		test_memcpy_null_2(void)
{
	char	buff1[100];
	char	buff2[100];

	memset((char*)buff1, '\0', 50);
	memset((char*)buff2, '\0', 50);
	memcpy((char*)buff1, NULL, 0);
	ft_memcpy((char*)buff2, NULL, 0);
	if (strcmp(buff1, buff2) == 0)
		return (0);
	else
		return (-1);
}
