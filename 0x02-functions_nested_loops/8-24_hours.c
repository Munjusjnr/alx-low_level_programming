#include "main.h"

/**
 * jack_bauer - print every minute of the jack bauer
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
