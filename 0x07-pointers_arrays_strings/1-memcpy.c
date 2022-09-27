#include "main.h"

/**
 * *_memcpy - program that copy memory
 * @dest: array where there are copied to
 * @src: array where there are copied from
 * @n: number of bytes to copy
 *
 * Return: a character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
