/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 16:59:56 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_memset/memset_test.h"
#include "ft_bzero/bzero_test.h"
#include "ft_memcpy/memcpy_test.h"
#include "ft_putstr/putstr_test.h"
#include "ft_putnbr/putnbr_test.h"

int		main(void)
{
	memset_launcher();
	bzero_launcher();
	memcpy_launcher();
	putstr_launcher();
	putnbr_launcher();
	return (0);
}
