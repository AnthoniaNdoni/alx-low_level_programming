#include "main.h"

/**
 * _print_rev_recursion - prints string in rev followed by new line use function
* @s: string to be printed.
*/

void _print_rev_recursion(char *s)
{

	if (*s == '\0') {
		putchar('\n');
		return;
	}

	{
		putchar(*s);
		_print_rev_recursion(s + 1);
		return;
	}
}
