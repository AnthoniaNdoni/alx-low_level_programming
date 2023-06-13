#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size 'size' and assign 'c' to each element
 * @size: size of the array
 * @c: character to assign
 *
 * Return: pointer to the created array, NULL if failed
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
