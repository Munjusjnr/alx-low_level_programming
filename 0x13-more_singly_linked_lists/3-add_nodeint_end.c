#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of the list
 * @head: A pointer to a pointer to the head of the list
 * @n: An interger
 * Return: the head of the list with the lastnode appended to it
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *currentnode, *lastnode;

	lastnode = malloc(sizeof(listint_t));
	if (lastnode == NULL)
	{
		return (NULL);
	}
	lastnode->n = n;
	lastnode->next = NULL;
	if (*head == NULL)
	{
		*head = lastnode;
	}
	else
	{
		currentnode = *head;
		while (currentnode->next != NULL)
		{
			currentnode = currentnode->next;
		}
		currentnode->next = lastnode;
	}
	return (*head);
}
