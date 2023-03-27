#include "main.h"

/**
 * swap_int - swaps the two values
 *
 * @a: swap value 1
 * @b: swap value 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
