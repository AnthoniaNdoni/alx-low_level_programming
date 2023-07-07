#include "main.h"

/**
 * get_endianness - func that checks endianness
 * Return: 0 for big, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
