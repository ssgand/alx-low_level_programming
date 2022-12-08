#include "lists.h"

/**
 * dlistint_len - function to return the number of elements in a linked list
 * @h: the first node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *t = h;
	size_t count = 0;

	while (t->next != NULL)
	{
		count++;
		t = t->next;
	}
	count++;
	return (count);
}
