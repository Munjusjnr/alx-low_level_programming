#include "lists.h"
/**
 * print_dlistint - printing all elements of a double linked list
 * @h: A pointer to head of the linked list
 * Return: number of elememts of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
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
