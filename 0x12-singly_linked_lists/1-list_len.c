#include "lists.h"

/**
 * list_len - function that print the number of elements in a linked list
 * @h: head of the list
 *
 * Return: nodes count
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
