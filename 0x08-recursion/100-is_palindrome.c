#include "main.h"

int check_pal(char *str, int start, int end);
int _strlen_recursion(char *str);
/**
* is_palindrome - checks if a string is a palindrome
* @s: string value to reverse
*
* Return: one if it is and zero it's not
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string value
 * @str: function string to calculate the length
 *
 * Return: length of the string value
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_recursion(str + 1));
}
/**
 * check_pal - checks characters recursive for palindrome
 * @str: function of the string value to check
 * @start: start iterator
 * @end: end index
 * Return: one if is palindrome, zero if not
 */
int check_pal(char *str, int start, int end)
{
	if (*(str + start) != *(str + end - 1))
		return (0);
	if (start >= end)
		return (1);
	return (check_pal(str, start + 1, end - 1));
}
