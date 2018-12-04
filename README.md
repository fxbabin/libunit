# libunit

Libunit is a 42 rush project (project realised on a week-end) consisting in building a library for unitary testing in C. The rush was realized by me (fbabin) and bleplat.

### launcher format
```
void	strcat_launcher(void)
{
	t_ut_list		*ut_list;

	ut_list = NULL;
	ut_putstr("STRCAT :\n");
	ut_list_add(&ut_list, "test_strcat_ok", &test_strcat_ok);
	ut_list_run(&ut_list);
	ut_list_del(&ut_list);
}
```

![Screenshot](real_test.png)
