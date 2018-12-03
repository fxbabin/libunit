/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18_ft_atoi_letter_after_minimum.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:34:41 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:35:16 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_letter_after_minimum(void)
{
	if (ft_atoi(" -2147483648yf") == atoi(" -2147483648yf"))
		return (0);
	else
		return (-1);
}
