#include "main.h"

/**
* _strlen_recursion - Returns the length of a string using the function
* @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);

	{
	return (1 + _strlen_recursion(str + 1));
	}
}
