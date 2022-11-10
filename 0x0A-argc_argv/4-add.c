#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds numbers on the command line'
 * @argc: number of the arguments
 * @argv: array of the arguments
 *
 * Return: 0 when successful
 */
int main(int argc, const char *argv[])
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 49 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
