#include "main.h"

/**
 * print_last_digit - This funcions get input numbers
 * output its last digit
 * * @n: So this parameter has to do with an integer
 * Return: last_digit of the input value (Success)
 */

int int print_last_digit(int n)
{
	int last_digit = _abs(n) % 10;

	_putchar (last_digit + '0')
	return (last_digit);
}
