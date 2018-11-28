/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:43:33 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/28 23:44:39 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTSTR_TEST_H
# define PUTSTR_TEST_H

#include <string.h>
#include "libunit.h"

void	ft_putstr(char *s1);
void	putstr_launcher(void);
int		test_putstr_simple_1(void);
int		test_putstr_null(void);
int		test_putstr_zeros(void);

#endif
