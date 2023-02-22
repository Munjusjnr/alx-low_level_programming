#include <limits.h>
#include "main.h"

/**
 * abs_val - This function return absolute value of integer
 * * @n: the input integer
 * Return: Absolute value of integer
 */

int abs_val(int n)
{
	return (n < 0 ? -n : n);
}

/**
 * print_last_digit - This function get input numbers
 * output its last digit
 * * @num: So this parameter has to do with an integer
 * Return: last_digit of the input value (Success)
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = abs_val(num % 10);

	_putchar (last_digit + '0');
	return (last_digit);
}
