#include <stdio.h>
#include "main.h"

/**
 * main-print sum of two numbers.
 * @argc: number of arguments.
 * @argv: pointer to array
 * _atoi - converts a string to an integer
 * Return: the int converted from the string
*/

int main(int argc, char *argv[])
{
	int i = ario(argv[1]) * atio(argv[2]);

	if (argc == 3)
	{
		printf("%i\n", i);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
