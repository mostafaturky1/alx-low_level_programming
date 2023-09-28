#include "main.h"
#include <stdio.h>

/**
 *binary_to_uint -  converts binary number to unsigned int
 *@b: is argument of binary
 *
 * Return: converted int or 0
 * or Return (NULL) if the argument id NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{

		if (b[i] == '0' || b[i] == '1')
		{
			res = res << 1;
			res += (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (res);
}
