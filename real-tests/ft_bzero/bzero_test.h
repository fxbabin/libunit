/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:21:12 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 23:28:10 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BZERO_TEST_H
# define BZERO_TEST_H

# include <string.h>
# include "libunit.h"
# include "libft.h"

void	bzero_launcher(void);
int		test_bzero_simple_1(void);
int		test_bzero_zero(void);
int		test_bzero_null(void);

#endif
