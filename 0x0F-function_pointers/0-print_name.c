#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name using a func pointer
 * @name: string to print
 * @f: pointer to print func
 *
 * Return: nothing
 *
 * Descript: func takes a name & a func pointer invokes the func to print name.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
