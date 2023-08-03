#include "main.h"
/**
 * _sqrt_recursion - natural square root of a number
 * @n: input
 * @y: natural square root of a number
 * Return: int
 */
int square(int n, int y);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - search for square root
 * @n: input
 * @y: natural square root of a number
 * Return: int
 */
int square(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y < n)
		return (square(n, y + 1));
	else
		return (-1);
}

