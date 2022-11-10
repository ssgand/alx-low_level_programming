#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to print strings
 * @separator: string to be printed btn the strings
 * @n: number of the strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		char *c = va_arg(p, char*);

		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
		if (separator == NULL || i == n - 1)
		{
			continue;
		}
		else
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
