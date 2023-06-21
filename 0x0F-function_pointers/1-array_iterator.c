#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each elem of an arr on a new line
 * @arr: array
 * @length: num of elem to print
 * @func: pointer to the func to perform an action on each elem
 *
 * Return: void
 *
 * Descript: func takes an arr,len,& func pointer.
 */
void array_iterator(int *arr, size_t length, void (*func)(int))
{
	unsigned int i;

	if (arr == NULL || func == NULL)
		return;

	for (i = 0; i < length; i++)
	{
		func(arr[i]);
	}
}
