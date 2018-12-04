/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_random_formula_fpe.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:00:58 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:27:17 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "random_formula_test.h"

int		test_random_formula_fpe(void)
{
	if (ft_random_formula(2) == 2)
		return (0);
	else
		return (-1);
}
