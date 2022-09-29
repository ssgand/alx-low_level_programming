#include "main.h"

/**
 * is_prime_number - program to return a prime number is the number is one
 * @n: parameter
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	int j = n / 2;

	if (n <=1)
		return (0);
	return (is_prime(n, j));
}

/**
 * is_prime - second function to help the first one
 * @n: parameter
 * @j: parameter
 *
 * Return: an integer
 */
int is_prime(int n, int j)
{
	if (j <= 1)
		return (1);
	else if (n % j == 0)
		return (0);
	return (is_prime(n, j - 1));
}
