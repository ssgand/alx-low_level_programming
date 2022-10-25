#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - function to add new node at the end of a linked list
 * @head: pointer the head of the list
 * @n: data to add in the new nod
 *
 * Return: a structure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *existing_node;

	new_node = malloc(sizeof(listint_t));
	existing_node = *head;

	if (existing_node == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node = existing_node;
		return (new_node);
	}

	while (existing_node->next != NULL)
	{
		existing_node = existing_node->next;
	}
	new_node->next = NULL;
	new_node->n = n;
	existing_node->next = new_node;
	return (new_node);
}
