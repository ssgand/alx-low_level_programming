#include "lists.h"
#include <stdlib.h>

/**
 * free-listint - function to free a linked list
 * @head: pointer to the first element of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
