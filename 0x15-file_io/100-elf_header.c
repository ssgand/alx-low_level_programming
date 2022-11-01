#include <stdio.h>

/**
 * main - program that displays the information contained in the
 * ELF header at the start of an ELF file
 * @argc: number of arguments
 * @argv: pointer to the array of arguments
 *
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
