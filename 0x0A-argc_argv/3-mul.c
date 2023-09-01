#include <stdlib.h>
#include <stdio.h>

/**
 * main-print sum of two numbers.
 * @argc: number of arguments.
 * @argv: pointer to array
 * _atoi - converts a string to an integer
 * Return: the int converted from the string
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
