/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoinclr_test.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:21:12 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/01 00:30:47 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRJOINCLR_TEST_H
# define STRJOINCLR_TEST_H

# include <string.h>
# include "libunit.h"

char	*ft_strjoinclr(char *s1, char *s2);
void	strjoinclr_launcher(void);
int		test_strjoinclr_abort(void);

#endif
