#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  frees a listint_t list
 * @head: lists to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *end;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		end = (*head)->next;
		free(*head);
		*head = end;
	}
	*head = NULL;
}
