#include "lists.h"
/**
* pop_listint - remove the head node of a linked list
* @head:the pointer to the first element in the linked list
*
* Return: data inside the elements that was remove,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nm);
}
