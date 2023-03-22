#include "function_pointers.h"
#include <string.h>

/**
 * print_name - function that prints a name
 * *@name: A pointer to a character name
 * *@f: A function pointer that takes a pointer to character as a para
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	int len = strlen(name) + 1;

	if (len != '\0')
	{
	(*f)(name);
	}
}
