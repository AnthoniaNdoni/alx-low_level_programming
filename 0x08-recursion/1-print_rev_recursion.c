#include "main.h"

/**
 * _print_rev_recursion - prints string in rev followed by new line use func
* @s: string to be printed.
*/
void _print_rev_recursion(char *s)
{

	if (*s == '\0')

	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
