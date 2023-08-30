#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index -  return node at a certain index
 * @head: node first in the linked list
 * @index: index the node to return
 *
 * Return: points to that node i am looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *end = head;

	while (end && j < index)
	{
		end = end->next;
		j++;
	}

	return (end ? end : NULL);
}
