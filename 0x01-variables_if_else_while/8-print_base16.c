#include <stdio.h>

/**
 * main - printing the first numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	char n;
	char cr;

	for (n = '0'; n <='9'; n++)
	{
		putchar(n);
	}
	for (cr = 'a'; cr <= 'f'; cr++)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}
