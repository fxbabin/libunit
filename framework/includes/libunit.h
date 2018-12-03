/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:49:37 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:19:59 by bleplat          ###   ########.fr       */
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

typedef struct				s_ut_list
{
	char					*ut_name;
	int						(*ut_function)(void);
	struct s_ut_list		*next;
}							t_ut_list;

void						ut_list_add(t_ut_list **ut_list,
								char *ut_name, int (*ut_function)(void));
void						ut_list_del(t_ut_list **ut_list);
void						ut_putstr(char *str);
int							ut_putstr_error(char *str);
void						ut_putnbr(int nb);
void						ut_putstr_with_spaces(char *str, int width);
void						ut_puttest_result(char *ut_name, char *color_code,
								char *result);
void						ut_putscore(int tests_passed, int tests_total);
void						ut_putscore_wrapper(int tests_passed,
								int tests_total);

void						ut_display_test(char *ut_name, int status);
void						ut_display_test_wrapper(char *ut_name, int status);
void						ut_child_process(t_ut_list *ut_list);
void						ut_parent_process(t_ut_list *ut_list,
								int *tests_passed);
int							ut_list_run(t_ut_list **ut_list);
int							ut_list_run_wrapper(char *wrapper_name,
								t_ut_list **ut_list);
int							ut_get_stdout_fd(int *p_fd);
char						*ut_get_stdout_buffer(int buff_size, char *buff_out,
								int stdout_fd, int *p_fd);
int							ut_launch_tests(t_ut_list **tests);

void						ut_display_test(char *ut_name, int status);

typedef void				(*t_display_test)(char*, int);
typedef void				(*t_display_total)(int, int);

t_display_test				ut_use_display_test_fnt(void (*f)(char*, int));
t_display_total				ut_use_display_total_fnt(void (*f)(int, int));

#endif