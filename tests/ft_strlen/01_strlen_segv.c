/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_segv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:37:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:37:44 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"

int		test_strlen_segv(void)
{
	if (ft_strlen(NULL) == 0)
		return (0);
	else
		return (-1);
}
