#include "lists.h"

/**
 * free_dlistint - he frees a dlistint_t list.
 * @head:the pointer to head of the list
 * Return: Nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
