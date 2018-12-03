/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_ft_atoi_not_number.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:23:50 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:24:16 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_not_number(void)
{
	if (ft_atoi("FAIR") == atoi("FAIR"))
		return (0);
	else
		return (-1);
}
