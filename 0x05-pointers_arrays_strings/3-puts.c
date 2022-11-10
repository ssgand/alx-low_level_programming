#include "main.h"

/**
 * _puts - program to print a string
 * @str: parameter representing the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
