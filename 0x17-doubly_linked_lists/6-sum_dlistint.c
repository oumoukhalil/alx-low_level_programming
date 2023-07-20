#include "lists.h"

/**
 * sum_dlistint - he returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head:the head of the list
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sm;

	sm = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sm += head->n;
			head = head->next;
		}
	}

	return (sm);
}
