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

	for (i = 0; i < k; i++)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
