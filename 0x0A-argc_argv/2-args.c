#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc : the argument count
 * @argv : the argument victor
 *
 * Return : zero
 */
int main(int argc, char *argv[])
{
        int i;

	for (i = 0; i < argc; i++)
	{	
		printf("%s\n", argv[i]);
	}
        return (0);
}
