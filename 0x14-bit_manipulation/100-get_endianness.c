#include "main.h"

/**
 * get_endianness - function to check the endianness
 *
 * Return: an integer
 */
int get_endianness(void)
{
	int i = 1;
	char *n = (char *)&i;

	if (*n == 1)
		return (1);
	return (0);
}
