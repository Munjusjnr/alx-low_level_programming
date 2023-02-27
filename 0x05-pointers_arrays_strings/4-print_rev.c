#include "main.h"
#include <stdio.h>
#include <string.h>

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
