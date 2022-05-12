#include "shell.h"
/**
* fun_exit - function to close the shell
* @comand: string of get arguments
* @copy: is copy of buffer
* @buffer: is a string of getline
* @status: is the number that return
* Return: The variable status or Error.
*/

int fun_exit(char **comand, char *copy, char *buffer, int status)
{
	free(comand);
	free(copy);
	free(buffer);
	exit(status);
}
