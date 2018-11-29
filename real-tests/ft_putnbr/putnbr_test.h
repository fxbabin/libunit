/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:21:12 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 23:36:24 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTNBR_TEST_H
# define PUTNBR_TEST_H

# include <string.h>
# include "libunit.h"
# include "libft.h"

void	putnbr_launcher(void);
int		test_putnbr_int_min(void);
int		test_putnbr_m_20(void);
int		test_putnbr_zero(void);
int		test_putnbr_one(void);
int		test_putnbr_p_20(void);
int		test_putnbr_int_max(void);

#endif
