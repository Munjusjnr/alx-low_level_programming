#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies string from one to another
 * *@dest: Contains the string that would return
 * *@src: source of the string to be copied
 * Return: destination string to be returned
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
