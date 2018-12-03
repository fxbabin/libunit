/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:13:21 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:14:26 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTSTR_TEST_H
# define PUTSTR_TEST_H

# include <string.h>
# include "libunit.h"

void	ft_putstr(const char *s);
void	putstr_launcher(void);
int		test_putstr_print_ok(void);

#endif
