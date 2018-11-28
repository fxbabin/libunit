/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_wrapper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:43:10 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 22:11:17 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		ut_putstr_err(char *str)
{
	ut_putstr(TLRED);
	ut_putstr("Error :: ");
	ut_putstr(TRESET);
	ut_putstr(str);
	return (-1);
}

void	ut_putscore_wrapper(int n_pass, int n_tot)
{
	int		width;

	width = 50 - n_tot;
	while (--width > 0)
		write(1, " ", 1);
	ut_putstr("[");
	if (n_pass == n_tot)
		ut_putstr(TLGREEN);
	else
		ut_putstr(TLRED);
	ut_putnbr(n_pass);
	ut_putstr(" / ");
	ut_putnbr(n_tot);
	ut_putstr(TRESET);
	ut_putstr("]\n");
}
