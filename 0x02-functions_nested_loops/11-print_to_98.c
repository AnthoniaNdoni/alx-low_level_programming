#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers
 *
 * @n: function variable
 *
 * Return: 0
 */

void print_to_98(int n)
{

	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("98\n");
}
