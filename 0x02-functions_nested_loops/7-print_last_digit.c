#include <limits.h>
#include "main.h"

/**
 * print_last_digit - This function get input numbers
 * output its last digit
 * * @num: So this parameter has to do with an integer
 * Return: last_digit of the input value (Success)
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
	num *= -1;
	}
	last_digit = num % 10;

	_putchar (last_digit);
	return (last_digit);
}
