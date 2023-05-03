#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input a value
 * @src: input a value
 * @n: input a value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		k++;
	}
	while (k < n)
	{
		des[k] = '\0';
		k++;
	}

	return (dest);
}
