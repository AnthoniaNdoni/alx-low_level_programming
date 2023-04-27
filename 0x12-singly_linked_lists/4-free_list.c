#include "lists.h"

/**
 * free_list - free a linked list
 *
 * @head: pointer to the first element to be freed
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node =  head))
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
