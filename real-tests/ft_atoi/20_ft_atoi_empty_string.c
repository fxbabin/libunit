/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20_ft_atoi_empty_string.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:41:54 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:42:20 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_empty_string(void)
{
	if (ft_atoi("") == atoi(""))
		return (0);
	else
		return (-1);
}
