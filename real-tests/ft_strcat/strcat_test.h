/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:21:12 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 17:01:47 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRCAT_TEST_H
# define STRCAT_TEST_H

#include <string.h>
#include "libunit.h"

char	*ft_strcat(char *s1, const char *s2);
void	strcat_launcher(void);
int		test_strcat_simple_1(void);
int		test_strcat_simple_ko(void);
int		test_strcat_null(void);
int		test_strcat_buse(void);

#endif
