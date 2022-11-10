#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - program to print form the number in the argument to 98
 * @n: parameter representing the argument to print from
 *
 * Return: No return
 */
void print_to_98(int n)
{
	int c;

	if (n <= 98)
	{

		for (c = n; c <= 98; c++)
		{
			if (c < 98)
			{
				printf("%d, ", c);
			}
			else
			{
				printf("%d", c);
			}
		}
	}
	else if (n > 98)
	{
		for (c = n; c >= 98; c--)
		{
			if (c > 98)
			{
				printf("%d, ", c);
			}
			else
			{
				printf("%d", c);
			}
		}
	}
	printf("\n");
}
