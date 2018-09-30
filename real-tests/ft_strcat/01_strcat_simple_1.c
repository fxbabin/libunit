/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcat_simple_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 16:23:45 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcat_test.h"

int		test_strcat_simple_1(void)
{
	char	buff1[100];

	strcpy((char*)&buff1, "toto");
	if (strcmp(ft_strcat(buff1, "tata"), "tototata") == 0)
		return (0);
	else
		return (-1);
}
