#include "main.h"

/**
 *print_binary -prints int as binary number
 *
 * @n: argument for int number
 *
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		int binary[32];
		int i = 0;
		int j;

		while (n > 0)
		{
			binary[i] = n % 2;
			n = n / 2;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(binary[j] + '0');
		}
	}
}
