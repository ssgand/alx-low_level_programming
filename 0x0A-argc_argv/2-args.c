#include "main.h"
#include <stdio.h>

/**
 * main - program to display arguments on the command line
 * @argc: number of arguments
 * @argv: array made of the arguments
 *
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
