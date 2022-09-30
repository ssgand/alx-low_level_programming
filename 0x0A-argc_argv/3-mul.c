#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two numbers on the command line
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: 0 when successful
 */
int main(int argc, const char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
