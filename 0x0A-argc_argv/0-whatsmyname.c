#include "main.h"
#include <stdio.h>

/**
 * main - function to print the arguments passed to the command line
 * @argc: number of argumets
 * @argv: array of the arguments
 *
 * Return: returns 0 when the program is a success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[0]);
		}
	}
	return (0);
}
