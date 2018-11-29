/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memcpy_null_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 23:30:29 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		test_memcpy_null_1(void)
{
	char	buff1[100];
	char	buff2[100];

	memset((char*)buff1, '\0', 50);
	memset((char*)buff2, '\0', 50);
	memcpy(NULL, "toto", 0);
	ft_memcpy(NULL, "toto", 0);
	if (strcmp(buff1, buff2) == 0)
		return (0);
	else
		return (-1);
}
