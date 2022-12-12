#include "main.h"

/**
 * _strlen - program to print the length of a string
 * @s: parameter
 *
 * Return: Maybe 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{}

	return (i);
}
