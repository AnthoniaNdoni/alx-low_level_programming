#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array size size and assign 'c'
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to the created array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
