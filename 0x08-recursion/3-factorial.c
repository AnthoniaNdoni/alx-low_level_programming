#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: number to find the factorial of n
 * Return: if n is greater than zero - the factorial of n
 *         if n is less than one - to indicate an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
}
