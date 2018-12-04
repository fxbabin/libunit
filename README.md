# Libunit (42 rush)

![Screenshot](real_test.png)

Libunit is a 42 rush project (project realised on a week-end) consisting in building a library for unitary testing in C. The rush was realized by me (fbabin) and bleplat.

This project includes a framework to test functions in C language. As functions in C can crash (segfault) it forks and run the tested function in a child process to prevent your main test program from crashing.

### Handled signals

The crash signals handled in the framework are metionned below.

| Signal   | Normal_Display | OneLine_Display |
| -------- | -------------- | --------------- |
| 0        | OK             | .               |
| -1       | KO             | K               |
| SIGALARM | TIMEOUT        | T               |
| SIGSEG   | SEGV           | S               |
| SIGBUS   | BUSE           | B               |
| SIGABRT  | ABORT          | A               |
| SIGFPE   | FPE            | F               |

![Screenshot](test.png)

## Framework code format

### Available functions

| Function Names                 | Description                                                |
| ------------------------------ | ---------------------------------------------------------- |
| ```ut_list_add```              | Add a test to the unit_test list                           |
| ```ut_list_del```              | Delete all the tests in the unit_test list (free the list) |
| ```ut_putstr```                | Write a string on stdout                                   |
| ```ut_display_test```          | Display test result in normal format                       |
| ```ut_display_test_wrapper```  | Display test result in one_line format                     |
| ```ut_list_run```              | Run all the tests in the unit_test list                    |
| ```ut_use_display_test_fnt```  | Set the display function for test (can be customized)      |
| ```ut_use_display_total_fnt``` | Set the display function for result (can be customized)    |

```
typedef struct			s_ut_list
{
	char			*ut_name;
	int			(*ut_function)(void);
	struct s_ut_list	*next;
}				t_ut_list;

void				ut_list_add(t_ut_list **ut_list, char *ut_name, int (*ut_function)(void));
void				ut_list_del(t_ut_list **ut_list);
void				ut_putstr(char *str);
void				ut_display_test(char *ut_name, int status);
void				ut_display_test_wrapper(char *ut_name, int status);
int				ut_list_run(t_ut_list **ut_list);
t_display_test			ut_use_display_test_fnt(void (*f)(char*, int));
t_display_total			ut_use_display_total_fnt(void (*f)(int, int));
```

### Launcher format
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


