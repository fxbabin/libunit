/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bzero_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:42:17 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bzero_test.h"

int		test_bzero_null(void)
{
	bzero(NULL, 0);
	ft_bzero(NULL, 0);
	if (0 == 0)
		return (0);
	else
		return (-1);
}
