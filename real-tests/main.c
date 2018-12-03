/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/03 20:05:53 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_memset/memset_test.h"
#include "ft_bzero/bzero_test.h"
#include "ft_memcpy/memcpy_test.h"
#include "ft_putstr/putstr_test.h"
#include "ft_putnbr/putnbr_test.h"
#include "ft_atoi/atoi_test.h"

#include <stdio.h>

int		main(void)
{
	int		err;

	err = 0;
	err |= memset_launcher();
	err |= bzero_launcher();
	err |= memcpy_launcher();
	err |= putstr_launcher();
	err |= putnbr_launcher();
	err |= atoi_launcher();
	return (-err);
}
