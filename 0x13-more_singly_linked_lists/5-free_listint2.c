#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the address of the head of listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (head == NULL)
		return;

	while (*head)
	{
		last = (*head)->next;
		free(*head);
		*head = last;
	}

	*head = NULL;
}
