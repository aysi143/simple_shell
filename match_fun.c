#include "shell.h"
/**
* match_fun - match the function to exe
* @comands: string of get arguments
* comand: string of arguments
* copy: is copy of buffer
* buffer: is a string of getline
* Return: The variable status or Error.
*/
int (*match_fun(char *comands))(char **comand, char *copy, char *buffer, int s)
{
	get_fun type[] = {
		{"exit", fun_exit},
		{"env", fun_env},
		{NULL, NULL}
	};
	int t;

	for (t = 0; type[t].shape != NULL; t++)
	{
		if (_strcmp(type[t].shape, comands) == 0)
			return (type[t].f);
	}
	return (NULL);
}
