#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: an integer
 */
int create_file(const char *filename, char *text_content)
{
	int fdo, fdw, i = 0;

	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);
	while (text_content && *(text_content + i))
		i++;
	fdw = write(fdo, text_content, i);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}
