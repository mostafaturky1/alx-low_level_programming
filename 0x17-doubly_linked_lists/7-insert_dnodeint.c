#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given index in a doubly linked list.
 * @h: A double pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *newnode, *current = *h;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	while (current->next != NULL)
	{
		i++;
		current = current->next;
	}
	if (idx > i)
		return (NULL);
	while (--idx)
	{
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	newnode->prev = tmp;
	tmp->next = newnode;
	return (newnode);
}
