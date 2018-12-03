/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_ft_atoi_starting_spaces.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:26:43 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:27:08 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_starting_spaces(void)
{
	if (ft_atoi("\t\n\v\f\r 4434") == atoi("\t\n\v\f\r 4434"))
		return (0);
	else
		return (-1);
}
