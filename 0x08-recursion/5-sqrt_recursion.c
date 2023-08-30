#include "main.h"

int squa(int n, int v);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
*/
int _sqrt_recursion(int n)
{
	return (squa(n, 1));
}

/**
 * squa - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @v: iterator
 *
 * Return: the resulting square root
*/
int squa(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (squa(n, v + 1));
	}
	else
	{
		return (-1);
	}
}
