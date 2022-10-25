#include "lists.h"

/**
 * free_listint2 - function to free memory used by a linked list
 * @head: the first element of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	head = NULL;
}
