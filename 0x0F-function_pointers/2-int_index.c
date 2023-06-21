#include "function_pointers.h"
/**
 * int_index - returns index place if comparison is true, else -1
 * @arr: array
 * @length: num of elem in arr
 * @cmp: pointer to the comparison func
 *
 * Return: 0
 *
 * Descript: func takes an array,length & comparison func
 */
int int_index(int *arr, int length, int (*cmp)(int))
{
	int i;

	if (arr == NULL || length <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < length; i++)
	{
		if (cmp(arr[i]))
			return (i);
	}
	return (-1);
}
