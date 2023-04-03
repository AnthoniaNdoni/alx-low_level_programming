#include "main.h"
#include <string.h>

/**
*_memset - the function that will fill the memory with a specific byte
* @s: a string assigned to the function
* @b: the desired char
* @n: the number of unsigned int to be changed
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
