#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	for (int i = 0; argc--; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
