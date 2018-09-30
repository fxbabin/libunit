/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strcat_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:57:14 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 16:57:48 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcat_test.h"

int		test_strcat_null(void)
{
	char	buff1[100];

	strcpy((char*)&buff1, "toto");
	if (strcmp(ft_strcat(buff1, NULL), "toto") == 0)
		return (0);
	else
		return (-1);
	return (0);
}
