#include "lists.h"

/**
 * sum_dlistint - function to add all the data in a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *t;
	int sum = 0;

	t = head;
	if (t == NULL)
	{
		return (0);
	}
	else
	{
		while (t != NULL)
		{
			sum += t->n;
			t = t->next;
		}
	}
	return (sum);
}

