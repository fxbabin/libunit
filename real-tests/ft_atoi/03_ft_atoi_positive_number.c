/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_atoi_positive_number.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:16:47 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:17:18 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_positive_number(void)
{
	if (ft_atoi("24001") == atoi("24001"))
		return (0);
	else
		return (-1);
}
