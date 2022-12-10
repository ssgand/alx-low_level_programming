#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index - function to return a node at a given
 * position
 * @head: pointer to the first node
 * @index: position in the linked list of the node to return
 *
 * Return: a node at the position specified
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t;
	unsigned int count = 0;

	t = head;
	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		while (t != NULL)
		{
			if (count == index)
			{
				break;
			}
			count++;
			t = t->next;
		}
	}
	return (t);
}

