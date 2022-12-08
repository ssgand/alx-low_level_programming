#include "lists.h"

/**
 * free_dlistint - function to free a linkded list
 * @head: pointer to the first element in the least
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
