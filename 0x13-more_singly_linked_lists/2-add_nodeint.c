#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - function to add a node as the first element of a linked list
 * @head: the first element of the linked list
 * @n: number of elements
 *
 * Return: the new linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (0);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
}
