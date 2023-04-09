#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endianness 1 if little
 */

int get_endianness(void)
{
	int i = 1;

	char *b = (char *) &i;

	return ((int) *b);
}
