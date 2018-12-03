/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:59:24 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:41:22 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat/strcat_test.h"
#include "ft_strlen/strlen_test.h"
#include "ft_strjoinclr/strjoinclr_test.h"
#include "ft_strcat_len/strcat_len_test.h"
#include "ft_random_formula/random_formula_test.h"
#include "ft_putstr_wrong/putstr_wrong_test.h"
#include "ft_putstr/putstr_test.h"
#include "ft_fibonacci/fibonacci_test.h"

int		main(void)
{
	strcat_launcher();
	strlen_launcher();
	strjoinclr_launcher();
	strcat_len_launcher();
	random_formula_launcher();
	putstr_wrong_launcher();
	putstr_launcher();
	fibonacci_launcher();
	return (0);
}
