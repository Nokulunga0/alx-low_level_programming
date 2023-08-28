#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: a pointer to listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->i);
		n++;
		h = h->next
	}
	return (i);
}
