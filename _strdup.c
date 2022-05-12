#include "shell.h"
/**
**_strdup - returns a pointer to a newly allocated space in memory.
*@str: a new string which is a duplicate of the string.
* Return: duplicate string.
*/
char *_strdup(char *str)
{
	char *d;

	if (str == 0)
		return (NULL);

	d = malloc(_strlen(str) + 1);
	if (d == NULL)
		return (NULL);
	_strcpy(d, str);
	return (d);
}
