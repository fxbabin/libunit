/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_signals_ko.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:51:41 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/01 00:32:57 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signals_test.h"

int		test_signals_ko(void)
{
	char	buff1[100];

	strcpy((char*)&buff1, "toto");
	if (strcmp(ft_strcat(buff1, "tata"), "tototat") == 0)
		return (0);
	else
		return (-1);
}
