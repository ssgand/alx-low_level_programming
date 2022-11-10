#include "main.h"

/**
 * *_strncpy - program to copy a specified number of string characters
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: char type
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
