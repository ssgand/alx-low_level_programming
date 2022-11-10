#include <stdio.h>

/**
 * main - print the alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char cr;

	for (cr = 'z'; cr >= 'a'; cr--)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}
