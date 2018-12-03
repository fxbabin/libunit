/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:21:12 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 14:27:05 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BZERO_TEST_H
# define BZERO_TEST_H

# include <string.h>
# include "libunit.h"
# include "libft.h"

int		bzero_launcher(void);
int		test_bzero_simple_1(void);
int		test_bzero_zero(void);
int		test_bzero_null(void);

#endif
