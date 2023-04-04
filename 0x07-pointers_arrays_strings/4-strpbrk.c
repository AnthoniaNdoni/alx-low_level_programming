#include <stdio.h>
#include "main.h"

/**
 *  _strpbrk - Entry point
 * @s: first input
 * @accept: then next input
 * Return: 0
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				return (s + j);
		}
	}
	return (NULL);
}
