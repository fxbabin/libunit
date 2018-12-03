/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinclr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:44:15 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 16:48:21 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(const char *s)
{
	int		i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

static char		*ft_strcat(char *s1, const char *s2)
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

static char		*ft_strcpy(char *dest, const char *src)
{
	char	*tmp;

	tmp = dest;
	while ((*dest++ = *src++))
		;
	return (tmp);
}

char			*ft_strjoinclr(char *s1, char *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(str, s1);
	free(s1);
	ft_strcat(str, s2);
	free(s2);
	s1 = str;
	return (s1);
}
