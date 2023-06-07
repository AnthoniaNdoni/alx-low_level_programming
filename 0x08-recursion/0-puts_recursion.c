#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line use function puts();
 *
 * @s: the string to be printed
 *
 * Return: 0
 */
void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

		_putchar(*s);
		_puts_recursion(s + 1);

	{

	else
	}
		_putchar('\n');
		return (0);
}
