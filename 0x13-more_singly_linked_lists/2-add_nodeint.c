#include "lists.h"
/**
* add_nodeint - at the beginning of a linked list adds a new node
* @head:the pointer to the first node in the list
* @n: the data to put in that new node
*
* Return:the pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
