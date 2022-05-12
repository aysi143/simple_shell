#include "shell.h"
/**
 * execute - execute the function
 * @arguments: string of get arguments
 * @copy: is copy of buffer
 * @buffer: is a string of getline
 * @file: is the name of file executable
 * @cont: is the counter of prompt
 * Return: The variable status or Error.
 */
int execute(char **arguments, char *copy, char *buffer, char **file, int cont)
{
	int status = 0, (*f)(char **comand, char *copy, char *buffer, int status);
	pid_t pid;
	char *string_exe = NULL;
	struct stat st;
	bool is_alias = false;

	f = match_fun(arguments[0]);
	if (f)
	{
		f(arguments, copy, buffer, status);
		free(arguments);
		return (0);
	}
	if (stat(arguments[0], &st) == -1) /**si argv[0] es un alias **/
	{
		string_exe = get_PATH(arguments[0]);
		arguments[0] = string_exe;
		is_alias = true;
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(arguments[0], arguments, NULL) == -1)
			exit(print_error(file, copy, cont));
	}
	else
	{
		wait(&status);
		status = WEXITSTATUS(status);
		if (is_alias == true)
			free(string_exe);
		free(arguments);
	}
	return (status);
}
