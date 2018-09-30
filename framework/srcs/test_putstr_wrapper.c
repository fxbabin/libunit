/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_wrapper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 15:14:39 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 18:50:46 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ut_putscore_wrapper(int n_pass, int n_tot)
{
	int		width;

	width = 50 - n_tot;
	while (--width > 0)
		write(1, " ", 1);
	ut_putstr("[");
	if (n_pass == n_tot)
		ut_putstr(LGREEN);
	else
		ut_putstr(LRED);
	ut_putnbr(n_pass);
	ut_putstr(" / ");
	ut_putnbr(n_tot);
	ut_putstr("\e[0;38;255;255;255m]\n");
}
