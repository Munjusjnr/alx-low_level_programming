#include "lists.h"

/**
 * print_list - print all elements in a list
 * @h: a pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t increment = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		increment++;
		h = h->next;
	}
	return (increment);
}
