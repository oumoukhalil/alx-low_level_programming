#include "lists.h"
/**
* add_nodeint_end - at the end of a linked list adds a node
* @head: the pointer to the first element in the list
* @n: the data to put in the new element
*
* Return: the pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tmp->next)
		tmp = tmp->next;
tmp->next = nw;
return (nw);
}
