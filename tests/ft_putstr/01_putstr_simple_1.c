/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_putstr_simple_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:46:06 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:48:57 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

int		test_putstr_simple_1(void)
{
	char	buff1[100];

	strcpy((char*)&buff1, "toto");
	if (strcmp(ft_putstrcat(buff1, "tata"), "tototata") == 0)
		return (0);
	else
		return (-1);
}
