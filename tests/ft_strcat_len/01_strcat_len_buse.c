/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcat_len_buse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:00:58 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:20:53 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcat_len_test.h"

int		test_strcat_len_buse(void)
{
	if (ft_strcat_len("sss", "toto") == 7)
		return (0);
	else
		return (-1);
}
