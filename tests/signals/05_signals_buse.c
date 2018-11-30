/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_signals_buse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:00:58 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 17:05:18 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signals_test.h"

int		test_signals_buse(void)
{
	char	*s1;
	char	*s2;

	s1 = "ss";
	s2 = "totot";
	if (strcmp(ft_strcat(s1, s2), "tototat") == 0)
		return (0);
	else
		return (-1);
}
