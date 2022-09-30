#include "main.h"

/**
 * _isalpha - finging arguments are alphabetical or not
 * @c: argument
 *
 * Return: Sometimes 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
