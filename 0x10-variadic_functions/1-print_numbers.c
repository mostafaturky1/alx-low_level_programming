#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i = n;

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
		printf("%d%s", va_arg(arg, int), i ? (separator ? separator : "") : "\n");
		va_end(arg);
	}
	}
}
