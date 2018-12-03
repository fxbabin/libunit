/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_atoi_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:03:52 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 22:10:02 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_test.h"

int		atoi_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("FT_ATOI :\n");
	ut_list_add(&ut_list, "Lonely digit", &test_ft_atoi_positive_digit);
	ut_list_add(&ut_list, "Lonely negative digit",
		&test_ft_atoi_negative_digit);
	ut_list_add(&ut_list, "Positive number", &test_ft_atoi_positive_number);
	ut_list_add(&ut_list, "Negative number", &test_ft_atoi_negative_number);
	ut_list_add(&ut_list, "Maximum integer", &test_ft_atoi_maximum);
	ut_list_add(&ut_list, "Minimum integer", &test_ft_atoi_minimum);
	ut_list_add(&ut_list, "Zero", &test_ft_atoi_zero);
	ut_list_add(&ut_list, "Several zeroes", &test_ft_atoi_several_zeros);
	ut_list_add(&ut_list, "Not a number", &test_ft_atoi_not_number);
	ut_list_add(&ut_list, "Starting spaces", &test_ft_atoi_starting_spaces);
	ut_list_add(&ut_list, "Ending spaces", &test_ft_atoi_ending_spaces);
	ut_list_add(&ut_list, "Letter at middle", &test_ft_atoi_letter_at_middle);
	ut_list_add(&ut_list, "-- string", &test_ft_atoi_minus_minus);
	ut_list_add(&ut_list, "-+ string", &test_ft_atoi_minus_add);
	ut_list_add(&ut_list, "+- string", &test_ft_atoi_add_minus);
	ut_list_add(&ut_list, "Spaces only", &test_ft_atoi_spaces_only);
	ut_list_add(&ut_list, "Spaces before minimum",
		&test_ft_atoi_spaces_before_minimum);
	ut_list_add(&ut_list, "Minimum and a letter",
		&test_ft_atoi_letter_after_minimum);
	ut_list_add(&ut_list, "Too big number", &test_ft_atoi_overflow);
	ut_list_add(&ut_list, "Empty string", &test_ft_atoi_empty_string);
	ut_list_add(&ut_list, "Lonely minus", &test_ft_atoi_minus);
	return (ut_launch_tests(&ut_list));
}
