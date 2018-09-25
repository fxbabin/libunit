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

void		tests_dump(t_test **list)
{
	t_test		*l;

	if (!list || !*list)
	{
		ft_putstr("(null)\n");
		return ;
	}
	l = *list;
	while ((*list))
	{
		if ((*list)->name)
			ft_putstr((*list)->name);
		else
			ft_putstr(" (null) ");
		ft_putstr(" -> ");
		*list = (*list)->next;
	}
	ft_putstr(" NULL\n");
	*list = l;
}

void	child_process(t_test *test)
{
	exit((test->test() == 0) ? 0 : -1);
}

void	tests_run(t_test **testlst)
{
	t_test		*l;
	pid_t		pid;

	/*if (!testlst || !*testlst)
	{
		ft_dprintf(2, "%+kError :%k test list is empty.%k\n", LRED, EOC, RESET);
		return ;
	}*/
	l = *testlst;
	while ((*testlst))
	{
		pid = fork();
		if (pid == 0)
			child_process(*testlst);
		/*else:
			parent_process();*/
		ft_printf("pid %d\n", pid);
		*testlst = (*testlst)->next;
	}
	*testlst = l;
	
	
}

int		test(void)
{
	ft_printf("test 0\n");
	return (0);
}

int		test1(void)
{
	ft_printf("test 1\n");
	return (1);
}

int		test2(void)
{
	ft_printf("%s%s%s\n", NULL);
	return (1);
}

int		main(void)
{
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "name_1", &test);
	test_add(&lst, "name_2", &test2);
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
