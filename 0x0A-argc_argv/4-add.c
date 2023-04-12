#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name followed by a new line
 * @argc: number of argument
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, res = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] ; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
