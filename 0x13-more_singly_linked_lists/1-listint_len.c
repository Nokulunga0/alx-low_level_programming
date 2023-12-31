#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: a pointer to listint_t list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
