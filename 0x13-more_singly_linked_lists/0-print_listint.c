#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: A pointer to the head of the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t increment = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		increment++;
	}
	return (increment);
}
