#include "main.h"

/**
 * print_alphabet_x10 - printing lowercase alphabets using _putchar 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char cr;
	int n = 0;

	while ( n < 10)
	{
		for (cr = 'a'; cr <= 'z'; cr++)
		{
			_putchar(cr);
		}
		_putchar('\n');
		n++;
	}
}	
