/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcat_ok.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:23:38 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:36:28 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcat_test.h"

int		test_strcat_ok(void)
{
	char	buff1[100];

	buff1[0] = '\0';
	if (strcmp(ft_strcat(buff1, "tototata"), "tototata") == 0)
		return (0);
	else
		return (-1);
}
