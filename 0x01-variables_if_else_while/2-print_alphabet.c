#include <stdio.h>

/**
 * main - print alphabets in order
 *
 * this program prints in alphabets in order using the putchar keyword
 * Return: 0
 */

int main(void)
{
	char cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}
