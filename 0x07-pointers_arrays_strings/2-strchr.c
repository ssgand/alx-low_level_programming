#include "main.h"

/**
 * *_strchr - program that locates a character in a string
 * @s: string to be seached
 * @c: character to located
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

