/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_ft_atoi_letter_at_middle.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:28:11 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:28:58 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_letter_at_middle(void)
{
	if (ft_atoi("666r666") == atoi("666r666"))
		return (0);
	else
		return (-1);
}
