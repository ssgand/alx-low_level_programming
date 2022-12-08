#include "lists.h"

/**
 * dlistint_t *add_dnodeint - function to add a node at the beginning
 * of a linked list
 * @head: the first node
 * @n: the element to add
 *
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
	free(new);
}
