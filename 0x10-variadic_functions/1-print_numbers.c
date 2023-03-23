#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints integer numbers
 * @separator: A pointer to character separator
 * @n: operand for integers to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list(ptr);

	if (separator == NULL)
	{
		exit(0);
	}
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, unsigned int);
		if (i != (n - 1))
		{
		printf("%d%c", x, separator);
		}
		else
		{
		printf("%d", x);
		}
	}
	va_end(ptr);
	printf("\n");
}
