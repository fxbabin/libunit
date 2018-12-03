/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:24:13 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:35:40 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRCAT_TEST_H
# define STRCAT_TEST_H

# include <string.h>
# include "libunit.h"

void	strcat_launcher(void);
int		test_strcat_ok(void);
char	*ft_strcat(char *s1, const char *s2);
#endif
