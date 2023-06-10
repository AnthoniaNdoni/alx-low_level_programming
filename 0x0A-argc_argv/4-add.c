#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * checkNum - checks if a string contains only digits
 * @str: the string to be checked
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int checkNum(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
	if (!isdigit(str[count]))
	{
	return (0);
	}
	count++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int count;
	int stringToInt;
	int sum = 0;
	
	count = 1;
	while (count < argc)
	{
	if (checkNum(argv[count]))
	{
	stringToInt = atoi(argv[count]);
	sum += stringToInt;
	}
	else
	{
	printf("Error: Non-digit input\n");
	return (1);
	}
	count++;
	}

	printf("Sum: %d\n", sum);
	return (0);
}
