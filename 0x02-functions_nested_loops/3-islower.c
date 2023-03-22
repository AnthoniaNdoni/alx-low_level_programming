#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - function to print lower case
 *
 * @c: ls the declared variable
 *
 * Return: 1 if c is a lower case
 * and 0 otherwis
 **/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
