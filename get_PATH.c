#include "shell.h"
/**
 * get_PATH - function that matches PATH
 * @comand: string of the comand
 * Return: the route if it matches or NULL if not
 */
char *get_PATH(char *comand)
{
	char slash[] = "/", *string_cat = NULL, **array_path = NULL;
	char *copy = NULL, *token = NULL, *string = NULL, *path = getenv("PATH");
	int position = 0, cont = 0;
	struct stat st;

	string_cat = _strcat(slash, comand);
	copy = _strdup(path);
	token = strtok(copy, ":\n");
	while (token != NULL)
	{
		token = strtok(NULL, ":\n");
		cont++;
	}	array_path = malloc((cont + 1) * sizeof(char *));
	if (!array_path)
		return (NULL);
	free(copy);
	copy = _strdup(path);
	token = strtok(copy, ":\n");
	while (token != NULL)
	{
		array_path[position] = token;
		position++;
		token = strtok(NULL, ":\n");
	}	array_path[position] = NULL;
	while (cont)
	{
		position--;
		string = _strcat(array_path[position], string_cat);
		if (stat(string, &st) == 0)
		{
			free(copy);
			free(array_path);
			free(string_cat);
			return (string);
		}	cont--;
		free(string);
	}	free(copy);
	free(array_path);
	free(string_cat);
	return (NULL);
}
