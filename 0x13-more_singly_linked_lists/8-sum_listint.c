#include "lists.h"
/**
* sum_listint - calculates the sum of all the data in a listint_t list
* @head: the first node in the linked list
*
* Return:  the resulting of  sum
*/
int sum_listint(listint_t *head)
{
	int sm = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sm += tmp->n;
		tmp = tmp->next;
	}
	return (sm);
}
