#include "main.h"

/**
 * main - Entry point of code to call function jack bauer
 *
 * jack_bauer - print output in hour and minutes the
 * timeline of series jack bauer.
 *
 * Return: void when (success)
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
	for (m = 0; m < 60; m++)
	{
	_putchar ("%02d:%02d\n", h, m);
	}
	}
}

int main(void)
{
	jack_bauer();
	return (0);
}
