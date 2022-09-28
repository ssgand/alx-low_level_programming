#include "main.h"

/**
 * _strlen_recursion - program to measure string length using recursion
 * @s: parameter
 *
 * Return: returns an integer
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
