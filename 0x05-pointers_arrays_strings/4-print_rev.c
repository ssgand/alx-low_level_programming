#include "main.h"

/**
 * print_rev - program to print a string in reverse
 * @s: parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	for (i = 0; i < count; i++)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
