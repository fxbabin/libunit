# Libunit (42 rush)

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

## Framework code format

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

![Screenshot](real_test.png)
