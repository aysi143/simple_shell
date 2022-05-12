#include "shell.h"
/**
 * *_strcmp - this function reset n for the value 98
 * @s1: a char value
 * @s2 : a char value
 * Return: nothing.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
