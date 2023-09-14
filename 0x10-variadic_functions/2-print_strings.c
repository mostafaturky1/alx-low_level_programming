#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i = n;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	else
	{
		va_start(arg, n);
		while (i--)
		{
			printf("%s%s", (str = va_arg(arg, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
			va_end(arg);
		}

	}
}
