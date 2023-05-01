#include "lists.h"

/**
 * pop_listint - deletes the head node of the listint_t linked list
 * @head: pointer to the address of the first element in the linked list
 *
 * Return: the integer inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *last;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	last = (*head)->next;
	free(*head);
	*head = last;

	return (num);
}
