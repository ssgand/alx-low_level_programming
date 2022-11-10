#include "lists.h"

/**
 * sum_listint - function to return the sum of data in a linked list
 * @head: pointer to first element
 *
 * Return: an integer
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
