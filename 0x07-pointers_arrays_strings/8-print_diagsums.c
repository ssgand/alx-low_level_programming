#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - program to print the sum of the 2 diagonals of a square
 * matrix of integers
 * @a: parameter
 * @size: parameter
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k;

	for (k = 0; k < size; k++)
	{
		i = i + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		j = j + a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", i, j);
}
