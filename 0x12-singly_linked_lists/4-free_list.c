#include <stdlib.h>
#include "lists.h"

/**
 * free_list - func that frees a linked list
 * @head: pointer to the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;
	while (current)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
