#include "lists.h"
/**
* free_listint - he frees a linked list
* @head: listint_t list that must be free
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

