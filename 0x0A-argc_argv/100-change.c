#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to return the amount of coins representing the number given
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: 0 when successful
 */
int main(int argc, const char *argv[])
{
	int n, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	for (; n >= 0;)
	{
		if (n < 0)
		{
			printf("0\n");
		}
		else if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		else
			break;
		j++;
	}
	printf("%d\n", j);
	return (0);
}
