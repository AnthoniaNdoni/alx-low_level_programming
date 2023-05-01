#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: the first address node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer address to the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *last = head;

	while (last && i < index)
	{
		last = last->next;
		i++;
	}

	return (last ? last : NULL);
}
