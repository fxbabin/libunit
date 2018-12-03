/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_ft_atoi_several_zeros.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:23:05 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:23:33 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_several_zeros(void)
{
	if (ft_atoi("002") == atoi("002"))
		return (0);
	else
		return (-1);
}
