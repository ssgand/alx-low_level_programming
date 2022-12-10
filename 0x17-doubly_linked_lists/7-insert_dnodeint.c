#include "lists.h"

/**
 * insert_dnodeint_at_index - function to add a new node at specified
 * position in the linked list
 * @h: Pointer to the first element of the linked list
 * @idx: Position at which to insert the node
 * @n: data to insert
 *
 * Return: the new linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t, *pt;
	unsigned int count = 0;

	t = *h;
	pt = malloc(sizeof(dlistint_t));
	if (pt == NULL)
	{
		return (NULL);
	}
	pt->n = n;
	pt->next = NULL;
	pt->prev = NULL;
	if (t == NULL)
	{
		return (NULL);
	}
	else
	{

		while (t != NULL)
		{
			if (count == idx - 1)
			{
				pt->prev = t;
				pt->next = t->next;
				t->next = pt;
			}
			count++;
			t = t->next;
		}
		if (count < idx)
		{
			return (NULL);
		}
	}
	return (pt);
}
