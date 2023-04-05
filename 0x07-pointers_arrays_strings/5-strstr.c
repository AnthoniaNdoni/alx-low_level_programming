#include <stdio.h>
#include "main.h"

/**
 * _strstr - start point
 * @haystack: first input variable
 * @needle: then the next input variable
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}
		if (*second == '\0')
			return (haystack);
	}
	return (NULL);
}
