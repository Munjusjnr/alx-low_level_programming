#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to integer
 * *@s: operand that holds string
 * Return: number with its sign
 */

int _atoi(char *s)
{
	unsigned int res = 0;
	unsigned int sign = 1;
	unsigned int x = 0;
	unsigned int num_started = 0;

	while (s[x] != '\0')
	{
	if (s[x] >= '0' && s[x] <= '9')
	{
		res = res * 10 + (s[x] - '0');
		num_started = 1;
	}
	else if (s[x] == '-' && !num_started)
	{
		sign *= -1;
	}
	else if (s[x] == '+' && !num_started)
	{
		sign *= 1;
	}
	else if (s[x] == ';')
	{
		break;
	}
	x++;
	}
	if (num_started)
	{
		return (res * sign);
	}
	else
	{
		return (0);
	}
}
