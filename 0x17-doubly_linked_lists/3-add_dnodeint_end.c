#include "lists.h"

/**
 * *add_dnodeint_end - function to add a new node at the end
 * of a linked list
 * @head: pointer to the first node
 * @n: the element to add
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *t;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	t = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else if (*head != NULL)
	{
		while (t->next != NULL)
		{
			t = t->next;
		}
		new->prev = t;
		t->next = new;
	}

	return (new);
	free(new);
}
