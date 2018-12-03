/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:43:25 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 20:32:55 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Write the input string on stdout
** ex : "Error :: malloc failed"
*/

void	ut_putstr(char *str)
{
	int		len;

	if (!str)
	{
		ut_putstr("(null)");
		return ;
	}
	len = 0;
	while (str[len] != '\0')
		++len;
	write(1, str, len);
}

/*
** Write the input string on stdout with spaces at the end
** ex : "ut_1  "
*/

void	ut_putstr_with_spaces(char *str, int width)
{
	int		i;

	i = 0;
	if (!str)
	{
		ut_putstr("(null)");
		i = 7;
	}
	else
	{
		while (str[i++])
			;
		ut_putstr(str);
	}
	while (i++ < width)
		write(1, " ", 1);
}

/*
** Write the result of a test (with colors)
** ex : " : [OK]"
*/

void	ut_puttest_result(char *ut_name, char *color_code, char *result)
{
	ut_putstr_with_spaces(ut_name, 25);
	ut_putstr(" : [");
	ut_putstr(color_code);
	ut_putstr(result);
	ut_putstr(T_RESET);
	ut_putstr("]\n");
}

/*
** Write a number on stdout
*/

void	ut_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == -2147483648)
		ut_putstr("2147483648");
	if (nb >= 10)
	{
		ut_putnbr(nb / 10);
		ut_putnbr(nb % 10);
	}
	if (nb < 10 && nb >= 0)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

/*
** Write the number of tests passed (with colors)
** ex : "=============>   1 / 5 tests passed    <============="
*/

void	ut_putscore(int tests_passed, int tests_total)
{
	if (tests_passed == tests_total)
		ut_putstr(T_LGREEN);
	else
		ut_putstr(T_LRED);
	ut_putstr("========================>   ");
	ut_putnbr(tests_passed);
	ut_putstr(" / ");
	ut_putnbr(tests_total);
	ut_putstr(" tests passed   <========================\n");
	ut_putstr(T_RESET);
}
