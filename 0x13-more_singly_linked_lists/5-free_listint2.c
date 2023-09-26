#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *start;
	listint_t *del;

	if (!head)
		return;

	start = *head;
	while (start)
	{
		del = start;
		start = start->next;
		free(del);
	}
	*head = NULL;
}
