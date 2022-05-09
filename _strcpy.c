#include "shell.h"
/**
* *_strcpy - this function copies a string
* @dest: a char value
* @src : a char value
* Return: string copy
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (!dest || !src)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
