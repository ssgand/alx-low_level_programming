#include "main.h"

/**
 * clear_bit - function to set the value of a bit to 0 at a given index
 * @n: the bit to set
 * @index: the index of the bit
 *
 * Return: an integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
