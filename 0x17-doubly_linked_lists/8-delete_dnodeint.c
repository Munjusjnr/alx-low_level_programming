#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at a given index
 * @head: A pointer to pointer to the head of the linked list
 * @index: position at which the node would be expunged
 * Return: 1 if successful -1 if otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *denode;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	denode = *head;
	if (index == 0)
	{
		*head = denode->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(denode);
		return (1);
	}
	while (i < index && denode != NULL)
	{
		denode = denode->next;
		i++;
	}
	if (denode == NULL)
	{
		return (-1);
	}
	if (denode->prev != NULL)
	{
		denode->prev->next = denode->next;
	}
	if (denode->next != NULL)
	{
		denode->next->prev = denode->prev;
	}
	free(denode);
	return (1);
}
