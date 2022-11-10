#include "main.h"

char *leet(char *c)
{
	int i = 0;
	
	while (c[i] != '\0')
	{
		if ( c[i] == 65 || c[i] == 97)
		{
			c[i] = '4';
		}
		else if (c[i] == 69 || c[i] == 101)
		{
			c[i] = '3';
		}
		else if (c[i] == 79 || c[i] == 111)
		{
			c[i] = '0';
		}
		else if (c[i] == 84 || c[i] == 116)
		{
			c[i] = '7';
		}
		else if (c[i] == 76 || c[i] == 106)
		{
			c[i] = '1';
		}
		i++;
	}
	return (c);
}
