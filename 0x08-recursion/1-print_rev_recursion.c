#include "main.h"

/**
 * _print_rev_recursion - using recursion to print a string
 * *@s: A pointer to character s input
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
