#include "main.h"
/**
 * _strpbrk - start point
 * @s: input in value
 * @accept: input in value
 * Return: Always zero
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
