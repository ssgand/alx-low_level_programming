#include "main.h"

/**
 * _isupper - program that checks for uppercase characters
 * @c: parameter to be supported
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
