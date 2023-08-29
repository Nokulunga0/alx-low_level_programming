#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: Linked list to be deleted
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *end;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	end = (*head)->next;
	free(*head);
	*head = end;
	return (i);
}
