/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/04/16 22:28:13 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "../libft/includes/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/wait.h>

typedef struct		s_unitt
{
	char			*name;
	int				(*test)(void);
	struct s_unitt	*next;
}					t_unitt;

t_unitt		*ft_unitt_create(char *test_name, int (*test)(void));
void		ft_unitt_push(t_unitt **unitt_lst, char *test_name, int (*test)(void));
void		ft_unitt_del(t_unitt **unitt_lst);

#endif
