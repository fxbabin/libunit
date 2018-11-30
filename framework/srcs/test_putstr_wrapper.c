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

/*
**  Write an error message with an error return
** ex : "Error :: malloc failed"
*/

int		ut_putstr_error(char *str)
{
	ut_putstr(T_LRED);
	ut_putstr("Error :: ");
	ut_putstr(T_RESET);
	ut_putstr(str);
	return (-1);
}

/*
** Write the score for the wrapper output (with colors)
** ex : "... [1/16]"
*/

void	ut_putscore_wrapper(int n_pass, int n_tot)
{
	int		width;

	width = 50 - n_tot;
	while (--width > 0)
		write(1, " ", 1);
	ut_putstr("[");
	if (n_pass == n_tot)
		ut_putstr(T_LGREEN);
	else
		ut_putstr(T_LRED);
	ut_putnbr(n_pass);
	ut_putstr(" / ");
	ut_putnbr(n_tot);
	ut_putstr(T_RESET);
	ut_putstr("]\n");
}
