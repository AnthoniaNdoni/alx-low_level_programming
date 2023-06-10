#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the minimum no of coins to make change for an amount of moneny
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: zero (0) success if  one (1) Error
 */
int main(int argc, char *argv[])
{
	int i, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);

	while (i > 0)
	{
		coins++;
		if ((i - 25) >= 0)
		{
			i -= 25;
			continue;
		}
		if ((i - 10) >= 0)
		{
			i -= 10;
			continue;
		}
		if ((i - 5) >= 0)
		{
			i -= 5;
			continue;
		}
		if ((i - 2) >= 0)
		{
			i -= 2;
			continue;
		}
		i = i - 1;
	}
	printf("%d\n", coins);
	return (0);
}
