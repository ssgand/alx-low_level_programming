#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print elements of a linked list
 * @h: list to print
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
