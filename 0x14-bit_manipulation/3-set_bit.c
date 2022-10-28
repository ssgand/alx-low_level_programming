#include "main.h"

/**
 * set_bit - function to set bit to 1 at a given index
 * @n: a pointer to the bit
 * @index: the index
 *
 * Return: an integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
