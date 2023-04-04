#include "main.h"

/**
 * _memcpy - the function copies byte from memory area
 * @dest: memory stored area
 * @src: the area of memory where is copied
 * @n: number of bytes
 *
 * Return: the copied memory and the n byted
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
