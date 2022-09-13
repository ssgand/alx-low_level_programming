#include <unistd.h>

int _putchar(char c);

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void printing();

void print_alphabet(void);


/**
 * print_alphabet - program to print alphabet in lower case
 *
 * no return
 */
void print_alphabet(void)
{
	char cr;
	
	for (cr= 'a'; cr <= 'z'; cr++)                                                                                         
	{
		_putchar(cr);
	}
	_putchar('\n');
}
