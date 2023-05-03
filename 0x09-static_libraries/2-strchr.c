#include "main.h"
#include <stddef.h>

/**
 * _strchr - starting point
 * @s: input value
 * @c: input value
 * Return: Always zero  
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
