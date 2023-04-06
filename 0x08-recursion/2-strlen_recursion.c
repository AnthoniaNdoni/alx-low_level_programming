#include "main.h"

/**
 * _strlen_recursion - compute the length of a string
 * @s: string to be used
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
}
