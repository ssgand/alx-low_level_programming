#include "main.h"

/**
 * *_strncat - program to concatenate two strings with more specifications
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: characters
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
