/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 17:48:49 by fbabin            #+#    #+#             */
/*   Updated: 2018/02/16 17:49:08 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ft_iswp(char c)
{
	if (c == '\n' || c == '\r' || c == '\t' || \
			c == '\v' || c == '\f' || c == ' ')
		return (1);
	else
		return (0);
}
