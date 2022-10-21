#include "lists.h"

/**
 * print_list - program to print all the elements of a list
 * @h: pointer to list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str)
		{

			printf("[%u] %s", h->len, h->str);
		}
		else
		{
			
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return (i);
}
