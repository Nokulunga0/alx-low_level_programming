#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a list
 * @head: poits to the first node of the listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *end;

	while (head != NULL)
	{
		end = head->next;
		free(head);
		head = end;
	}
}
