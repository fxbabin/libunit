/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17_ft_atoi_spaces_before_minimum.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:32:55 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:36:37 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_spaces_before_minimum(void)
{
	if (ft_atoi(" -2147483648") == atoi(" -2147483648"))
		return (0);
	else
		return (-1);
}
