#include "main.h"

/**
 * read_textfile - function to read a text file and print it
 * to the posix standard out
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: an ssize_t integer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *tmp;

	if (filename == NULL)
		return (0);
	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(tmp);
		return (0);
	}
	fdr = read(fdo, tmp, letters);
	if (fdr < 0)
	{
		free(tmp);
		return (0);
	}
	fdw = write(STDOUT_FILENO, tmp, fdr);
	free(tmp);
	close(fdo);
	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
