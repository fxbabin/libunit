#include "../libft/includes/libft.h"
#include "libunit.h"
#include <string.h>

int		test_strcat_simple_1(void)
{
	char	buff1[100];

	strcpy((char*)&buff1, "toto");
	if (strcmp(ft_strcat(buff1, "tata"), "tototata") == 0)
		return (0);
	else
		return (-1);
}

int		test_strcat_simple_ko(void)
{
	char	buff1[100];

	strcpy((char*)&buff1, "toto");
	if (strcmp(ft_strcat(buff1, "tata"), "tototat") == 0)
		return (0);
	else
		return (-1);
}

int		test_strcat_null(void)
{
	char	buff1[100];

	strcpy((char*)&buff1, "toto");
	if (strcmp(ft_strcat(buff1, NULL), "toto") == 0)
		return (0);
	else
		return (-1);
	return (0);
}

int		test_strcat_buse(void)
{
	char	*s1;
	char	*s2;

	s1 = "ss";
	s2 = "totot";
	if (strcmp(ft_strcat(s1, s2), "tototat") == 0)
		return (0);
	else
		return (-1);
}

void	strcat_launcher(void)
{
	t_test		*lst;

	lst = NULL;
	test_add(&lst, "test_strcat_simple_1", &test_strcat_simple_1);
	test_add(&lst, "test_strcat_simple_ko", &test_strcat_simple_ko);
	test_add(&lst, "test_strcat_null", &test_strcat_null);
	test_add(&lst, "test_strcat_buse", &test_strcat_buse);
	tests_run_wrapper("ft_strcat", &lst);
	tests_del(&lst);
}
