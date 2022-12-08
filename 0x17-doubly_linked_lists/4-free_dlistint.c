#include "lists.h"

/**
 * free_dlistint - function to free a linkded list
 * @h: pointer to the first element in the least
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	while(head->next != NULL)
	{
		free(head);
		head = head->next;
	}
}
