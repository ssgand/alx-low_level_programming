#include "main.h"

/**
 * swap_int - program to swap the values of two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
