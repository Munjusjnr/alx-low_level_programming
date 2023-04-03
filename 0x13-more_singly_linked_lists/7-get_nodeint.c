#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a list
 * @head: A pointer to the head of the list
 * @index: the index to which the node exist
 * Return: if the node exists or not
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentnode;
	unsigned int v;

	currentnode = head;
	v = 0;
	while (currentnode != NULL)
	{
		if (v == index)
		{
			return (currentnode);
		}
		v++;
		currentnode = currentnode->next;
	}
	return (currentnode);
}
