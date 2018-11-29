/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_memset_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 23:35:07 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		test_memset_null(void)
{
	char	buff1[100];
	char	buff2[100];

	memset((char*)buff1, '\0', 50);
	memset((char*)buff2, '\0', 50);
	memset((char*)&buff1, 'x', 0);
	ft_memset((char*)&buff2, 'x', 0);
	if (strcmp(buff1, buff2) == 0)
		return (0);
	else
		return (-1);
}
