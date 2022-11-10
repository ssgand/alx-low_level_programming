#include "main.h"

/**
 * _isdigit - program that checks for a digit
 * @c: parameter
 *
 * Return: Sometimes 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
