#include "main.h"

/**
 * *str_concat - function to concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a character or a string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;
	int n;
	int a;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s2[j] != '\0'; j++)
			;
	n = i + j;
	ptr = malloc(n + 2 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			ptr[a] = s1[a];
		for (b = 0; s2[b] != '\0'; b++)
			ptr[a + b] = s2[b];
	}
	ptr[a + b] = '\0';
	return (ptr);
}
