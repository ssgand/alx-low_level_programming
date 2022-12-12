#include "main.h"

/**
 * *_memset - program to fill the memory
 * @s: string containing the characters that will fill the memory
 * @b: the character that will fill the memory
 * @n: the number of times the memory will be filled
 *
 * Return: returns a character when successfull
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
