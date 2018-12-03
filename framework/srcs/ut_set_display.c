/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_set_display.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:52:42 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 22:02:17 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Set the display format for each test
*/

void			(*ut_use_display_test_fnt(void (*f)(char*, int)))(char*, int)
{
	static void		(*d_test)(char*, int) = ut_display_test;

	if (f != (void*)0)
	{
		d_test = f;
	}
	return (d_test);
}

/*
** Set the display function for total results
*/

void			(*ut_use_display_total_fnt(void (*f)(int, int)))(int, int)
{
	static void		(*d_total)(int, int) = ut_putscore;

	if (f != (void*)0)
	{
		d_total = f;
	}
	return (d_total);
}
