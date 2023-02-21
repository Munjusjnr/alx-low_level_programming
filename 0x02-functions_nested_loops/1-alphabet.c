#include "main.h"

/**
 * function_name -  print_alphabet
 * Description: print_alphabet function prints all alphabets in
 * lower cases
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	_putchar (c);
	_putchar ('\n');
}
