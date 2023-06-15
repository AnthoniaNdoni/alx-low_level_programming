#include <stdlib.h>
#include "main.h"

/**
 * *_memset - allocate fills memory with a constant byte
 * @result: memory area to be filled
 * @k: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *result, char k, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		result[i] = k;
	}
	return (result);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}

