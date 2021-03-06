/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:00:58 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/01 00:31:51 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int nb)
{
	if (nb < 2)
		return (nb);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
