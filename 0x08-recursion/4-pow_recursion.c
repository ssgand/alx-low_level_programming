#include "main.h"

/**
 *_pow_recursion - fuction that returns the value of x raised to the power of y
 * @x: parameter
 * @y: parameter
 *
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	int n = 1;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	n *= x;
	return (n *= _pow_recursion(x, y - 1));
}

