#include "lists.h"
/**
* insert_nodeint_at_index - put a new node in a linked list,
* at a given position
* @head:this is the  pointer to the first node in the list
* @idx: index where the new node is added
* @n: the data to put in the new node
*
* Return: this is the pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	iunsigned int i;
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	for (i = 0; tmp && i < idx; i++)
	{
		if (j == idx - 1)
		{
			nw->next = tmp->next;
			tmp->next = nw;
			return (nw);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
