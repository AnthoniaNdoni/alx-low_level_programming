#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - start point
 * @a: fisrt variable input
 * @size: second variable input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int j, n, sumA = 0, sumB = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
		sumA = sumA + a[j];

	for (n = size - 1; n <= ( size * size) - size; n = n + size - 1)
	sumB = sumB + a[n];
	printf("%d, %d\n",sumA, sumB);
}
