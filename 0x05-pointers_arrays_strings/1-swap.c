#include "main.h"

/**
 * swap_int - a function that swaps an int
 * @a: the first parameter for the function
 * @b: the second parameter you want to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
