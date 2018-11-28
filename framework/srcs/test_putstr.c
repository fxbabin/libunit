/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:43:25 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:25:39 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ut_putstr(char *str)
{
	int		i;

	i = -1;
	if (!str)
	{
		ut_putstr("(null)");
		return ;
	}
	while (str[++i])
		;
	write(1, str, i);
}

void	ut_putstr_wild(char *str, int width)
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

void	ut_putsig(char *test_name, char *col1, char *text)
{
	ut_putstr_wild(test_name, 25);
	ut_putstr(" : [");
	ut_putstr(col1);
	ut_putstr(text);
	ut_putstr(TRESET);
	ut_putstr("]\n");
}

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

void	ut_putscore(int n_pass, int n_tot)
{
	if (n_pass == n_tot)
		ut_putstr(TLGREEN);
	else
		ut_putstr(TLRED);
	ut_putstr("========================>   ");
	ut_putnbr(n_pass);
	ut_putstr(" / ");
	ut_putnbr(n_tot);
	ut_putstr(" tests passed   <========================\n");
	ut_putstr(TRESET);
}
