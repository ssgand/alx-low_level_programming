#include "main.h"

/**
 * _abs - printing the absolut value of a number
 * @n: any argument
 *
 * Return: Maybe 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}
