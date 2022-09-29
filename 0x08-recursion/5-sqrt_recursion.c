#include "main.h"

/**
 * _sqrt_recursion - function to return the square root of any given number
 * @n: parameter
 *
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return(_sqrt(0, n));
}

/**
 * _sqrt - function that returrn the square root of any given number
 * @n: parameter
 * @x: parameter
 *
 * Return: integer
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
