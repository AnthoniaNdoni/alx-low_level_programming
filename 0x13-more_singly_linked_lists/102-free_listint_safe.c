#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer address to the first node in the linked list
 *
 * Return: number of node in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *last;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			last = (*h)->next;
			free(*h);
			*h = last;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}