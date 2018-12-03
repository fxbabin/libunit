/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_ft_atoi_ending_spaces.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:27:15 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:27:53 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_ending_spaces(void)
{
	if (ft_atoi(" -8 ") == atoi(" -8 "))
		return (0);
	else
		return (-1);
}
