#include "lists.h"

int _strlen_recursion(char *s);

/**
 * *add_node - function to add a new node at the beginning of  * a list
 * @head: pointer th first element
 * @str: string to set in the new node.
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

