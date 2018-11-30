/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:21:12 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 23:42:00 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNALS_TEST_H
# define SIGNALS_TEST_H

# include <string.h>
# include "libunit.h"

size_t	ft_strlen(const char *s);
void    ft_putstr(const char *s);
char	*ft_strcat(char *s1, const char *s2);
void	signals_launcher(void);
int		test_signals_ok(void);
int		test_signals_print_ok(void);
int		test_signals_ko(void);
int		test_signals_print_ko(void);
int		test_signals_buse(void);
int		test_signals_abort(void);
int		test_signals_fpe(void);
int		test_signals_timeout(void);
int		test_signals_segv(void);

#endif
