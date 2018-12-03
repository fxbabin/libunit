/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:21:12 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 14:27:38 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMSET_TEST_H
# define MEMSET_TEST_H

# include <string.h>
# include "libunit.h"
# include "libft.h"

int		memset_launcher(void);
int		test_memset_simple_1(void);
int		test_memset_tab(void);
int		test_memset_newline(void);
int		test_memset_zero(void);
int		test_memset_space(void);
int		test_memset_null(void);

#endif
