#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_strings -  function that prints strings, followed by a new line.
 * @separator: A pointer to character separator
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;

	va_list str;

	va_start(str, n);

	if (separator == NULL)
	{
		separator = ("");
	}
	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);
		if (string == NULL)
		{
			string = ("(nil)");
		}
		if (i != (n - 1))
		{
			printf("%s%s", string, separator);
		}
		else
		{
			printf("%s", string);
		}

	}
	va_end(str);
	printf("\n");
}
