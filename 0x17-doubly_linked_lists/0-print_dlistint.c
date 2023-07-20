#include "lists.h"

/**
 * print_dlistint - will prints all the elements find  of a
 * dlistint_t list
 *
 * @h:the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
