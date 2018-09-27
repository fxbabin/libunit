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
void	exit_timeout(int sig)
{
	(void)sig;
	exit(SIGALRM);
}
void	child_process(t_test *test)
{
	signal(SIGALRM, exit_timeout);
	alarm(1);
	exit((test->test() == 0) ? 0 : -1);
}

void	process_status(char *test_name, int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, LGREEN, "OK", RESET);
		else if (WEXITSTATUS(status) == SIGALRM)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "TIMEOUT", RESET);
		else
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, LRED, "KO", RESET);
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "SEGV", RESET);
		else if (WTERMSIG(status) == SIGBUS)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "BUSE", RESET);
		else if (WTERMSIG(status) == SIGABRT)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "ABORT", RESET);
		else if (WTERMSIG(status) == SIGFPE)
			ft_printf("\t%-*s : [%k%s%k]\n", 10, test_name, RED, "FPE", RESET);
	}
}

void	parent_process(t_test *test)
{
	int		status;
	//int		pid;
		
	(void)test;
	wait(&status);
	process_status(test->name, status);
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
		//ft_printf("pid %d\n", pid);
		if (pid == 0)
			child_process(*testlst);
		else
			parent_process(*testlst);
		*testlst = (*testlst)->next;
	}
	*testlst = l;
	
	
}

int		test_ok(void)
{
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
