#include "shell.h"
/**
* fun_env - prints the current environment
* @arguments: string of get arguments
* @copy: is copy of buffer
* @buffer: is a string of getline
* @status: is the number that return
* Return: The variable status or Error.
*/

int fun_env(char **arguments, char *copy, char *buffer, int status)
{
	char **env = environ;

	if (!arguments || !copy || !buffer) /* si son NULL */
		return (-1);

	while (*env) /* mientras se pueda recorrer */
	{
		printf("%s\n", *env);
		env++;
	}
	return (status);
}
