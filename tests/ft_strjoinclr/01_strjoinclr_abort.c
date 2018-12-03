/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strjoinclr_abort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:00:58 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:23:30 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strjoinclr_test.h"

int		test_strjoinclr_abort(void)
{
	if (strcmp(ft_strjoinclr("toto", "tata"), "tototata") == 0)
		return (0);
	else
		return (-1);
}
