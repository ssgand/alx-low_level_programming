#include "main.h"

/**
 * print_most_numbers - prints digits from 0 to 9 ommiting 2 and 4
 *
 * Return: list of numbers
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}