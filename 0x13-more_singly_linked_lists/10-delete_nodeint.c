#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete a node at a
 * given position in a linked list
 * @head: pointer to first element
 * @index: position of the node to delete
 *
 * Return: an integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *t = *head, *d;

	if (*head == NULL)
		return (-1);

	t = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
	}
	else
	{
		while (i < index)
		{
			t = t->next;
			if (t == NULL)
				return (-1);
			i++;
		}
		d = t;
		d = d->next;
		t->next = d->next;
		free(d);
		return (1);
	}
	return (1);
}
