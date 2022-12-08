#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function to print elements of a double linked list
 * @h: the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *t = h;

	while (t != NULL)
	{
		count++;
		printf("%d\n", t->n);
		t = t->next;
	}
	return (count);
}
