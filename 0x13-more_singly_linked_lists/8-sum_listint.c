#include "lists.h"

/**
 * sum_listint - calculates the sum of all the integer in a listint_t list
 * @head: first address node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *last = head;

	while (last)
	{
		sum += last->n;
		last = last->next;
	}

	return (sum);
}
