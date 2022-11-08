#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print all the parameters of a function
 * @separator: string to separate the numbers
 * @n: number of integer passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		int c = va_arg(p, int);

		if (separator == NULL || i == n - 1)
		{
			printf("%d", c);
		}
		else
		{
			printf("%d", c);
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
