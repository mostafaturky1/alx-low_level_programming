#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index in a linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	while (index)
	{
		tmp = tmp->next;
		index--;
	}
	if (tmp)
	{
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}
