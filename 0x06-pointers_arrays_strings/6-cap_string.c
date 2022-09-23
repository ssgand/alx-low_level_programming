#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: parameter
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, j;
	int k;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			k = 1;
		}
		for (j = 0; nots[j] != '\0'; j++)
		{
			if (nots[j] == str[i])
			{
				k = 1;
			}
		}
		if (k)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
				k = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
			{
				k = 0;
			}
			else if (str[i] > 47 && str[i] < 58)
			{
				k = 0;
			}
		}
	}
	return (str);
}
