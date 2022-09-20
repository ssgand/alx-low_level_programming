#include "main.h"

/**
 * rev_string - program to reverse a string
 * @s: parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	j = k - 1;
	for (i = j; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
