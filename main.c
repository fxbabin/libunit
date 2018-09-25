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

#include "libunit.h"

int		test(void)
{
	return (0);
}

int		main(void)
{
	t_unitt		*lst;

	lst = NULL;
	ft_unitt_push(&lst, "1", &test);
	//ft_unitt_push(&lst, "2", &test);
	//ft_unitt_push(&lst, "2", &test);
	
	/*load_test(&lst, "basic_strcpy_test_ok", &basic_strcpy_test_ok);
	load_test(&lst, "basic_strcpy_test_ko", &basic_strcpy_test_ko);
	load_test(&lst, "basic_strcpy_test_segv", &basic_strcpy_test_segv);
	load_test(&lst, "basic_strcpy_test_buse", &basic_strcpy_test_buse);
	ret = launch_tests(&lst);
	clean_list(&lst);*/
	return (0);
}
