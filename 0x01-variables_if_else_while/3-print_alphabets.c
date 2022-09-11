#include <stdio.h>

/**
 * main - this function prints lower and upper case alphabets in order
 *
 *
 * Return: 0
 */

int main(void)
{
	char cr;
	char Cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		putchar(cr);
	}
	for (Cr = 'A'; Cr <= 'Z'; Cr++)
	{
		putchar(Cr);
	}
	putchar('\n');
	return (0);
}
