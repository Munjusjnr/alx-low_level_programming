#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @format: A constant list of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int n;
	char *sep = "", *p;

	va_list args;

	va_start(args, format);

	if (format)
	{
	n = 0;
	while (format[n])
	{
		switch (format[n])
		{
		case 's':
			if (p == NULL)
				p = "(nil)";
			printf("%s%s", sep, va_arg(args, char *));
			break;
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		default:
			n++;
			continue;
		}
	sep = (", ");
	n++;
	}
	}
	va_end(args);
	printf("\n");
}
