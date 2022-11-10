#include "main.h"

/**
 * flip_bits - function that return the number needed to flip
 * @n: the bit number
 * @m: the number to flip n to
 *
 * Return: an unsigned integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = n ^ m, i = 0;

	while (t > 0)
	{
		i += (t & 1);
		t >>= 1;
	}
	return (i);
}
