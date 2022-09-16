#include "main.h"

/**
 * print_line - program to print line on the terminal
 * @n: parameter symbolising the _ character to be printed
 *
 * Return: Lines on the terminal
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}	
