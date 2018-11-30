/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:49:37 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 18:59:24 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/wait.h>

# define T_LRED				"\e[38;2;239;95;89m"
# define T_LGREEN			"\e[38;2;4;203;89m"
# define T_RED				"\e[38;2;255;10;10m"
# define T_RESET			"\e[0;38;255;255;255m"
# define T_TIMEOUT_DELAY	3

typedef struct				s_test_list
{
	char					*test_name;
	int						(*test_function)(void);
	struct s_test_list		*next;
}							t_test_list;

t_test_list					*test_list_create(char *test_name,
								int (*test_function)(void));
void						test_list_add(t_test_list **test_list,
								char *test_name, int (*test)(void));
void						test_list_del(t_test_list **test_list);
void						ut_putstr(char *str);
int							ut_putstr_error(char *str);
void						ut_putnbr(int nb);
void						ut_putstr_with_spaces(char *str, int width);
void						ut_puttest_result(char *test_name, char *color_code,
								char *result);
void						ut_putscore(int tests_passed, int tests_total);
void						ut_putscore_wrapper(int tests_passed,
								int tests_total);

void						child_process(t_test_list *test_list);
void						parent_process(t_test_list *test_list,
								int *tests_passed);
void						test_list_run(t_test_list **test_list);
void						test_list_run_wrapper(char *wrapper_name,
								t_test_list **test_list);
int							get_stdout_fd(int *p_fd);
char						*get_stdout_buffer(int buff_size, char *buff_out,
								int stdout_fd, int *p_fd);

#endif
