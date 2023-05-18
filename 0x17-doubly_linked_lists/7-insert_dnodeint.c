#include "lists.h"
/**
 * insert_dnodeint_at_index - inserting a node at a given position in a list
 * @h: A double pointer to head of the linked list
 * @idx: position at which node would be inserted
 * @n: integer that holds data
 * Return: list with node inserted or NUll if not
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *currentnode;
	unsigned int i;

	if (*h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	currentnode = *h;
	i = 0;
	while (i < (idx - 1) && currentnode != NULL)
	{
		currentnode = currentnode->next;
		i++;
	}
	if (i == (idx - 1) && currentnode != NULL)
	{
		newnode->prev = currentnode;
		newnode->next = currentnode->next;
		if (currentnode->next != NULL)
			currentnode->next->prev = newnode;
		currentnode->next = newnode;
		return (newnode);
	}
	else
	{
		free(newnode);
		return (NULL);
	}
}
