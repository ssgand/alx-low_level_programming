#include "main.h"
#include <stdio.h>

/**
 * main - program to count the number of arguments on the command line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if the program is a success
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	(void)*argv;

	for (i = 1; i < argc; i++)
	{
	j++;
	}
	printf("%d\n", j);
	return (0);
}
