#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, lc = 0, money = atoi(argv[1]);
	int c[] = {25, 10, 2, 5, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= c[i])
		{
			lc += money / c[i];
			money = money % c[i];
			if (money % c[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
