#include "lists.h"

/**
 * print_listint_safe - print the linked list
 * @head: A pointer to the head of the list
 * Return: the nodes of the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;
	
	if (head == NULL)
		return (0);
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = head;
		while (slow != NULL && fast != NULL && slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			if (fast != NULL && fast->next != NULL)
			{
				fast = fast->next->next;
			}
			else
			{
				fast = NULL;
			}
		}
		}
		count++;
	}
	return (count);
}
