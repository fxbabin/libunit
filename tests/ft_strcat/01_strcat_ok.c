/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:52:16 by fbabin            #+#    #+#             */
/*   Updated: 2018/04/16 22:28:13 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int     test_putstr(void)
{
    char    buff_out[100];
    int     stdout_fd;
    int     p_fd[2];

    stdout_fd = get_stdout_fd(p_fd);
    ft_putstr("test");
    if (ft_strequ(get_stdout_buffer(100, buff_out, stdout_fd, p_fd), "test"))
        return (0);
    else
        return (1);
}

int		test_ok(void)
{
    //ft_dprintf(error_fd, "totot");
	return (0);
}

int		test_ko(void)
{
	//ft_printf("test ko\n");
	return (-1);
}

int		test_segv(void)
{
	ft_printf("%s%s%s%s%s%s\n");
	return (-1);
}

int		test_buse(void)
{
	char	*s;

	s = "to";
	ft_strcpy(s, "ffffffffffffffffff");
	return (-1);
}

void handler(int sig)
{
	(void)sig;
	//exit(SIGABRT);
}

int test_abort(void)
{
	abort();
	//signal(SIGABRT,handler);
	return (0);
}

int test_fpe(void)
{
	int		nb1;
	int		nb2;
	int		total;

	nb1 = 5;
	nb2 = 0;
	total = nb1 / nb2;
	//signal(SIGABRT,handler);
	return (0);
}

int test_timeout(void)
{
	while (1)
	{
		;
	}
	return(0);
}

int		main(void)
{
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "test_ok", &test_ok);
	test_add(&lst, "test_ko", &test_ko);
	test_add(&lst, "test_segv", &test_segv);
	test_add(&lst, "test_buse", &test_buse);
	test_add(&lst, "test_abort", &test_abort);
	test_add(&lst, "test_fpe", &test_fpe);
	test_add(&lst, "test_timeout", &test_timeout);
	test_add(&lst, "test_timeout", &test_putstr);
    
    tests_run(&lst);
	
	tests_del(&lst);
	/*load_test(&lst, "basic_strcpy_test_ok", &basic_strcpy_test_ok);
	load_test(&lst, "basic_strcpy_test_ko", &basic_strcpy_test_ko);
	load_test(&lst, "basic_strcpy_test_segv", &basic_strcpy_test_segv);
	load_test(&lst, "basic_strcpy_test_buse", &basic_strcpy_test_buse);
	ret = launch_tests(&lst);
	clean_list(&lst);*/
	return (0);
}
