#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate a string to new memory space locate
 * @str: char string to duplicate
 * Return: string duplicate
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}
	s = malloc((sizeof(char) * (j + 1)));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <	j; i++)
	{
		(s[i] = str[i]);
	}
	s[i] = '\0';
	return (s);
}
