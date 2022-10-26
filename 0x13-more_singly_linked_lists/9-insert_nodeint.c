#include "lists.h"

/**
 * *insert_nodeint_at_index - function to insert a node at a
 * certain position in a linked list
 * @head: pointer to the first element
 * @idx: index where the new node should be added
 * @n: data to added
 *
 * Return: a structure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	for (; i <= idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		else
		{
			(*head) = (*head)->next;
		}
	}
	return (NULL);
}
