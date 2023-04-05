#include "main.h"

/**
 * print_chessboard - starting point
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int j, n;

	for (j = 0; j < 8; j++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[j][n]);
		_putchar('\n');
	}

}
