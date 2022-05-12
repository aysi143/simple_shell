#include "shell.h"
/**
 * print_error - print to error
 * @name_file: is the name of execute
 * @copy: is copy of buffer
 * @cont: is the counter of prompt
 * Return: Always 0.
 */
int print_error(char **name_file, char *copy, int cont)
{
	int status;

	status = fprintf(stderr, "%s: %i: %s: not found\n", name_file[0],
	cont, copy);
	return (status);
}
