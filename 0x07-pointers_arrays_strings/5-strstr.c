#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: parameter
 * @neddle: parameter
 *
 * Return: a character or a string
 */
char *_strstr(char *haystack, char *needle)
{
	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while ( *i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
