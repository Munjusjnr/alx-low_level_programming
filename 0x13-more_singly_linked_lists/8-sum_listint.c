#include "lists.h"

/**
 * sum_listint - computes the sum of all data(n) in a linked list
 * @head: A pointer to the head of the linked list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
