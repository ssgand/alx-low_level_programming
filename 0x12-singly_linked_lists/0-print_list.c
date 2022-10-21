#include "lists.h"

/**
 * print_list - program to print all the elements of a list 
 * @h: pointer to list
 * 
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else 
		{

			printf("[%u]", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
