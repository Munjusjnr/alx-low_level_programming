#include "main.h"

/**
 * jack_bauer - This function output the timeline
 * used in jack_bauer series
 * Return: void when (success)
 */

void jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
	for (int minute = 0; minute < 60; minute++)
	{
	_putchar ("%02d:%02d\n", hour, minute);
	}
	}
}
