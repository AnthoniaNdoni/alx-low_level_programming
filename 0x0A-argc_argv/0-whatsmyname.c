#include <stdio.h>
/**
 * main - program that print its name followed by a line
 * @argc : the argument count
 * @argv : the argument victor
 *
 * Return : zero
 */
int main(int argc, char *argv[])
{
	if(argc <= 1)
		printf("%s\n", argv[0]);
	return (0);
}
