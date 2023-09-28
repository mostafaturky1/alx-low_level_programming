#include "main.h"

/**
 *print_binary -prints int as binary number
 *
 * @n: argument for int number
 *
*/

void print_binary(unsigned long int n)
{
	int i, con = 0;
	unsigned long int now;

	for (i = 63; i >= 0; i--)
	{
		now = n >> i;

		if (now & 1)
		{
			_putchar('1');
			con++;
		}
		else if (con)
			_putchar('0');
	}
	if (!con)
		_putchar('0');
}
