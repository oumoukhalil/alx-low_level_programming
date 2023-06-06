#include "lists.h"
/**
* get_nodeint_at_index -in a linked list returns the node at a certain index
* @head:the first node in the linked list
* @index: index of the node to return
*
* Return: the pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tmp = head;

	while (tmp && j < index)
	{
		tmp = tmp->next;
		j++;
	}
	return (tmp ? tmp : NULL);
}
