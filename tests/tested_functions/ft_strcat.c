/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:44:15 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 23:26:54 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char	*tmp;

	tmp = s1;
	while (*s1 && *(s1++))
		;
	while (*s2 && (*s1++ = *s2++))
		;
	*s1 = '\0';
	return (tmp);
}
