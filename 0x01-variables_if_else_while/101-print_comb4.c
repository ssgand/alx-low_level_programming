#include <stdio.h>

/**
 * main - program to print three digits in order without repetition
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
	int i;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (n != i && n < i && n != m && n < m && m != i && m < i)
				{
					putchar(n);
					putchar(m);
					putchar(i);
				}
				else
				{
					continue;
				}
				if (n < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
