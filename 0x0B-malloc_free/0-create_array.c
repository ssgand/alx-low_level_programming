#include "main.h"

/**
 * create_array - function to creat and file into an array
 * @size: size of the array
 * @c: character is here
 *
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	else if (n == NULL)
	{
		printf("Not enough memory!\n");
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			n[i] = c;
		}
	}
	n[i] = '\0';
	return (n);
	free(n);
}
