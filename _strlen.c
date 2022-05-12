#include "shell.h"
/**
 * _strlen - this function returns the lenght of string
 * @s: is a string of input
 *
 * Return: len of the string.
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}
