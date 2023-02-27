#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print out a string in reverse
 * *@s: operand to hold string
 * Return: void
 */

void print_rev(char *s)
{
	int len, g;

	len = strlen(s);
	for (g = len - 1; g >= 0; g--)
	{
	_putchar (s[g]);
	}
	_putchar ('\n');
}
