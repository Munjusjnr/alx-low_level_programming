#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - function that checks for required operator
 * @s: A pointer to character
 * Return: the pointer to function, null if otherwise
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
		return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
