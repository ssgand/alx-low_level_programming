#include "main.h"
#include <stdio.h>

/**
 * print_array - program that prints n elements of an array
 * @a: parameter
 * @n: parameter
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");

}
