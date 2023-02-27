#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - outputting every other character
 * *@str: operand to hold input string
 * Return: void
 */

void puts2(char *str)
{
	int h, len;

	len = strlen(str);

	for (h = 0; h < len; h += 2)
	{
	_putchar (str[h]);
	}
	_putchar ('\n');
}
