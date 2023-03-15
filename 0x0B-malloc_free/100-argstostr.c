#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenate all arguments
 * *@ac: Operand for argument count
 * *@av: A pointer to a pointer character
 * Return: Null if failure, arguments if success
 */

char *argstostr(int ac, char **av)
{
	size_t length;
	int i, index;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	result = malloc(sizeof(char) * (length + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}
	result[length] = '\0';
	return (result);
}
