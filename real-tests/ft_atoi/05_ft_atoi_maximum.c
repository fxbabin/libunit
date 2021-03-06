/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_ft_atoi_maximum.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:18:14 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:19:04 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_maximum(void)
{
	if (ft_atoi("2147483647") == atoi("2147483647"))
		return (0);
	else
		return (-1);
}
