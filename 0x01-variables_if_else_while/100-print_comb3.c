#include <stdio.h>

/**
 * main - program to print ordered two digits numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (n != i && n < i)
			{
				putchar(n);
				putchar(i);
			}
			else
			{
				continue;
			}
		if (n < '8')
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}

