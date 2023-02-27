#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints the given string reversely
 * *@s: operand to hold string
 * Return: void
 */

void rev_string(char *s)
{
	int len, temp, h;

	len = strlen(s);
	for (h = 0; h < len / 2; h++)
	{
	temp = s[h];
	s[h] = s[len - h - 1];
	s[len - h - 1] = temp;
	}
}
