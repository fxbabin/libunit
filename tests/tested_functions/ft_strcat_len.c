/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:44:15 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:37:41 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_strcat_len(char *s1, char *s2)
{
	ft_strcat(s1, s2);
	return (ft_strlen(s1));
}
