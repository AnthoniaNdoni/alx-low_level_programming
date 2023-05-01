#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_len lists
 * @h: A pointer to the linked list of type listint_t to traverse
 *
 * Return: number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)

	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
