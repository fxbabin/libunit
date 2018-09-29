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

typedef struct          s_test
{
    char                *name;
    int                 (*test)(void);
    struct s_test       *next;
}                       t_test;

t_test                  *test_create(char *test_name, int (*test)(void));
void                    test_add(t_test **test_lst, char *test_name,
                            int (*test)(void));
void                    tests_del(t_test **test_lst);
void                    tests_run(t_test **testlst);
int                     get_stdout_fd(int *p_fd);
char                    *get_stdout_buffer(int buff_size, char *buff_out,
                            int stdout_fd, int *p_fd);

#endif
