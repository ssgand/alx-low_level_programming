#include "main.h"

/**
 * *_strdup - function that return a pointer to a duplicate of the given string
 * @str: the string to duplicate
 *
 * Return: a character
 */

char *_strdup(char *str)
{
	char *ptr;
	int n;
	int i;
	
	
	if (str == NULL)
	{
		return (NULL);
	}
	else 
		for (n = 0; str[n] != '\0'; n++);
		
	ptr = (char *)malloc(n + 1 * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';	
	return (ptr);
}
