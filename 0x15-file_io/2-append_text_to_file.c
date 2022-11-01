#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * of a file
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: an integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, i = 0;

	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fdo);
		return (1);
	}
	while (*(text_content + i))
		i++;
	fdw = write(fdo, text_content, i);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}
