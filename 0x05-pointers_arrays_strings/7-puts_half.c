#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - outputing half of a string
 * *@str: This character holds input string
 * Return: void
 */

void puts_half(char *str)
{
	int len, h, v;

	len = strlen(str);
	h = len / 2;
	if (len % 2 != 0)
	{
	h = (len + 1) / 2;
	}
	for (v = h; v < len; v++)
	{
	_putchar (str[v]);
	}
	_putchar ('\n');
}
