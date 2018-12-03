/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ft_atoi_negative_number.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:17:39 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:18:05 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_negative_number(void)
{
	if (ft_atoi("-56777") == atoi("-56777"))
		return (0);
	else
		return (-1);
}
