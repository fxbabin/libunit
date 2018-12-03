/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_atoi_positive_digit.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:11:07 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:14:03 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_positive_digit(void)
{
	if (ft_atoi("4") == atoi("4"))
		return (0);
	else
		return (-1);
}
