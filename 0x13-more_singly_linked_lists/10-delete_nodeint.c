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

	if (*head == NULL)
	{
		return (-1);
	}
	holder = *head;
	if (index == 0)
	{
		*head = holder->next;
		free(holder);
		return (1);
	}
	while (holder != NULL)
	{
		if (i == index)
		{
			previous->next = holder->next;
			free(holder);
			return (1);
		}
		previous = holder;
		holder = holder->next;
		i++;
	}
	return (-1);
}
