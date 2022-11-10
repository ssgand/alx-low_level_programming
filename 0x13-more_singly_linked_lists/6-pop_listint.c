#include "lists.h"

/**
 * pop_listint - function to delete a linked lists' head and return its data
 * @head: linked lists' head to delete
 *
 * Return: and integer
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		t = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(t);
	}
	return (n);
}
