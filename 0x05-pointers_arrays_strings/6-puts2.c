#include "main.h"

/**
 * puts2 - program that prints a string one characters at a time
 * @str: parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
