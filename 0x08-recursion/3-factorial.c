#include "main.h"

/**
 * factorial - program that return the factorial of a given number
 * @n: parameter
 *
 * Return: returns an integer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return n = n * factorial(n - 1);
}
