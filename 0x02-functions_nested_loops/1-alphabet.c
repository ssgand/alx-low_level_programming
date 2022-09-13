#include "main.h"

/**
 * print_alphabet - program to print alphabet in lower case
 *
 * no return
 */
void print_alphabet(void)
{
	char cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		_putchar(cr);
	}
	_putchar('\n');
}
/**
 * main - this will print the alphabets
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
