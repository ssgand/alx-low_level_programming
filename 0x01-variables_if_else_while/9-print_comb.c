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
		if (n < '9')
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		else if (n == '9')
		{
			putchar(n);
		}
	}
	return(0);
}
