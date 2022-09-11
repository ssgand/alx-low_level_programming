#include <stdio.h>

/**
 * main - print lower case alphabet except q and e
 *
 * Return: 0
 *
 */
int main(void)
{
	int cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		if (cr == 'e')
		{
			continue;
		}
		else if (cr == 'q')
		{
			continue;
		}
		else
		{	
			putchar(cr);
		}
	}
	putchar('\n');
	return (0);
}
