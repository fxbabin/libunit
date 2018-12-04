/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:38:42 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/04 20:00:12 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_TEST_H
# define STRLEN_TEST_H

# include <string.h>
# include "libunit.h"

int		ft_strlen(const char *s);
void	strlen_launcher(void);
int		test_strlen_segv(void);

#endif
