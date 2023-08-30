#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: locates first node in the linked list
 *
 * Return: resulted in the total sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *end = head;

	while (end != NULL)
	{
		sum += end->n;
		end = end->next;
	}

	return (sum);
}
