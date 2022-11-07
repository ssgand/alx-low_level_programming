#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function to calculate the sum of all its parameters
 * @n: last fixed parameter
 *
 * Return: an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	int sum = 0;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
