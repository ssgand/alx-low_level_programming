#include "main.h"

/**
 * *_strcat - program to concatenate a string on another string
 * @dest: parameter
 * @src: parameter
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++, j++)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';
	return(dest);
}
