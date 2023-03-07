#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - set value of a pointer to char
 * @s: A pointer to a pointer char s
 * @to: the character pointer to be copied
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
