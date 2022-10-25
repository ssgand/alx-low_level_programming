#include "lists.h"

/**
 * *get_nodeint_at_index - function to print the nth member of a linked list
 * @head: pointer to the first member of the list
 * @index: identification of the members of the list
 *
 * Return: a structure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t;
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else if (i == index)
		{
			t = head;
		}
		head = head->next;

	}
	return (t);
}
