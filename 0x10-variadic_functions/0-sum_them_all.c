#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - summing with variadic function
 * @n: first parameter argument
 * Return: sum if successful 0 if otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
