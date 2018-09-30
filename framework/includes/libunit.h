/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 18:35:25 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/wait.h>

# define LRED "\e[38;2;239;95;89m"
# define LGREEN "\e[38;2;4;203;89m"
# define RED "\e[38;2;255;10;10m"

typedef struct		s_test
{
	char			*name;
	int				(*test)(void);
	struct s_test	*next;
}					t_test;

t_test				*test_create(char *test_name, int (*test)(void));
void				test_add(t_test **test_lst, char *test_name,
						int (*test)(void));
void				tests_del(t_test **test_lst);

void				child_process(t_test *test);
void				parent_process(t_test *test, int *n_pass);
void				tests_run(t_test **testlst);
void				tests_run_wrapper(char *wname, t_test **testlst);

int					get_stdout_fd(int *p_fd);
char				*get_stdout_buffer(int buff_size, char *buff_out,
						int stdout_fd, int *p_fd);

void				ut_putstr(char *str);
void				ut_putnbr(int nb);
void				ut_putstr_wild(char *str, int width);
void				ut_putsig(char *test_name, char *col1, char *text);
void				ut_putscore(int n_pass, int n_tot);
void				ut_putscore_wrapper(int n_pass, int n_tot);

#endif
