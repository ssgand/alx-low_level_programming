#include "main.h"
/**
 * jack_bauer - program to print every minute of a 24 hours
 * Return: Maybe 0
 */
void jack_bauer(void)
{
	char a;
	char b;
	char c;
	char d;

	for (a = '0'; a <= '2'; a++)
	{
		if (a < '2')
		{
			for (b = '0'; b <= '9'; b++)
			{
				for (c = '0'; c <= '5'; c++)
				{
					for (d = '0'; d <= '9'; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}}}
		} else
		{
			for (b = '0'; b <= '3'; b++)
			{
				for (c = '0'; c <= '5'; c++)
				{
					for (d = '0'; d <= '9'; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}}}}}
}
