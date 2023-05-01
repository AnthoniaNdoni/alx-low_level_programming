#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: A pointer to the head of  listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	while (head)
	{
		last = head->next;
		free(head);
		head = last;
	}
}
