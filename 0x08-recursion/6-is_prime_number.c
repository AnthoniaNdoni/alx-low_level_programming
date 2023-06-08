#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - state if an integer is a prime number
 * @n: function to evaluate
 * Return: one if n is a prime number, zero if not
 */
int is_prime_number(int n)

{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - specify if a number is prime recursively
 * @n: function to evaluate
 * @i: iterator
 *
 * Return: one if n is prime, zero if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i >0)
			return (0);
	return (actual_prime(n, i - 1));
}
