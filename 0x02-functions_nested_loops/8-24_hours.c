#include "main.h"

/**
 * jack_bauer - This function output the timeline
 * used in jack_bauer series
 * Return: void when (success)
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
	_putchar ("%02d:%02d\n", hour, minute);
	}
	}
}
