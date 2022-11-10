#include "main.h"

/**
 * binary_to_uint - function to convert a binary number to an unsigned int
 * @b: binary number to convert
 *
 * Return: an integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, p = 1;
	int i;

	if (*b == '\0')
		return (0);
	for (i = 0; b[i];)
		i++;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n += (b[i] - '0') * p;
		p *= 2;
	}
	return (n);
}
