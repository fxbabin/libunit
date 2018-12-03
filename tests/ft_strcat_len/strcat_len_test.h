/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_len_test.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:21:12 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/01 00:30:47 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRCAT_LEN_TEST_H
# define STRCAT_LEN_TEST_H

# include <string.h>
# include "libunit.h"

int		ft_strcat_len(char *s1, char *s2);
void	strcat_len_launcher(void);
int		test_strcat_len_buse(void);

#endif
