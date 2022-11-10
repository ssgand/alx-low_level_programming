#include "lists.h"

/**
 * listint_len - function to return the number of elements in a linked list
 * @h: linked list
 *
 * Return: a long unsigned integer
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
