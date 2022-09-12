#include <stdio.h>

/**
 * main- program that print numbers separated by a comma
 *
 * Return:0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
}
