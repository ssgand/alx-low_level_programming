#include "main.h"

/**
 * *string_toupper - program to change lower case letters to uppercase
 * @p: an array of strings
 *
 * Return: a character
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}
	}
	return (p);
}


