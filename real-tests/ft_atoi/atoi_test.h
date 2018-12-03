/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:08:57 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 18:17:19 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_TEST_H
# define FT_ATOI_TEST_H

# include <string.h>
# include "libunit.h"
# include "libft.h"

int		atoi_launcher(void);

int		test_ft_atoi_positive_digit(void);
int		test_ft_atoi_negative_digit(void);
int		test_ft_atoi_positive_number(void);
int		test_ft_atoi_negative_number(void);
int		test_ft_atoi_maximum(void);
int		test_ft_atoi_minimum(void);
int		test_ft_atoi_zero(void);
int		test_ft_atoi_several_zeros(void);
int		test_ft_atoi_not_number(void);
int		test_ft_atoi_starting_spaces(void);
int		test_ft_atoi_ending_spaces(void);
int		test_ft_atoi_letter_at_middle(void);
int		test_ft_atoi_minus_minus(void);
int		test_ft_atoi_minus_add(void);
int		test_ft_atoi_add_minus(void);
int		test_ft_atoi_spaces_only(void);
int		test_ft_atoi_spaces_before_minimum(void);
int		test_ft_atoi_letter_after_minimum(void);
int		test_ft_atoi_overflow(void);
int		test_ft_atoi_empty_string(void);
int		test_ft_atoi_minus(void);
#endif
