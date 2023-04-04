#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node at a given index
 * @head: A pointer to a pointer to the head of the list
 * @index: An index to which the node would be deleted
 * Return: 1 if successful -1 if otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *holder, *previous;

	holder = *head;
	if (holder == NULL)
	{
		return (-1);
	}
	if (holder != NULL && i == index)
	{
		*head = holder->next;
		free(holder);
		return (1);
	}
	while (holder != NULL && i != index)
	{
		previous = holder;
		holder = holder->next;
		i++;
	}
	previous->next = holder->next;
	free(holder);
	return (1);
}
