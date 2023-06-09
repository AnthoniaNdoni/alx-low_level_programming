#include "main.h"
#include <stdio.h>
/**
 * main - program that print the number of argument that passed into it
 * @argc : the argument count
 * @argv : the argument victor
 *
 * Return : zero
 */
int main(int argc, char *argv[])
{
        (void)argv;
        printf("%d\n", argc - 1);
	return (0);
}
