#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a node a given position
 * @head: A pointer to a pointer to the head of the list
 * @idx: The index at which the node should be at
 * @n: An interger
 * Return: The list with the its newnode inserted or not
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *nextnode, *prevnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	prevnode = NULL;
	nextnode = *head;
	i = 0;
	while (i < idx && nextnode != NULL)
	{
		i++;
		prevnode = nextnode;
		nextnode = nextnode->next;
	}
	if (i == idx)
	{
		newnode->next = nextnode;
		if (prevnode == NULL)
		{
			*head = newnode;
		}
		else
		{
			prevnode->next = newnode;
		}
		return (newnode);
	}
	else
	{
		free(newnode);
		return (NULL);
	}
}
