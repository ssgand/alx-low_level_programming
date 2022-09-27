#include "main.h"

/**
 * strchr - program that locates a character in a string
 * @s: string to be seached
 * @c: character to located
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i;
	int *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &c;
			_putchar(ptr);
			break;
		}
	}
}

