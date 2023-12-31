#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if the input integer is a prime number
 * @y: input
 * @n: input
 * Return: 0 or 1
 */
int check_prime(int n, int y);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: input
 * @y: input
 * Return: int
 */
int check_prime(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, y + 1));
}
