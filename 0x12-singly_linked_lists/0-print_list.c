#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: pointer to the first element
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	int c = 0;

	if (h)
	{
		while (h->next)
		{
			printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
			c++;
			h = h->next;
		}
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		c++;
	}
	return (c);
}
