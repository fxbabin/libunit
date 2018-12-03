/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_atoi_negative_digit.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:15:47 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:16:28 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_negative_digit(void)
{
	if (ft_atoi("-2") == atoi("-2"))
		return (0);
	else
		return (-1);
}
