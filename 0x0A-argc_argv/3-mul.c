#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers.
 * @argc : the argument count
 * @argv : the argument victor
 *
 * Return : zero
 */

int main(int argc, char *argv[])
{
        int k1 = 0, k2 = 0;

        if (argc == 3)
        {
		k1 = atoi(argv[1]);
		k2 = atoi(argv[2]);
                printf("%d\n", k1 + k2);
	}
	else
	{	
		printf("Error\n");
		return (1);
	}
	return (0);	
}
