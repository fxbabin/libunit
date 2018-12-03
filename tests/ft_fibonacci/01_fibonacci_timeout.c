/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_fibonacci_timeout.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:09:06 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:09:26 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fibonacci_test.h"

int		test_fibonacci_timeout(void)
{
	if (ft_fibonacci(100) > 1000000)
		return (0);
	else
		return (-1);
}
