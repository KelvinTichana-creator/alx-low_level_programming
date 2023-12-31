#include "lists.h"
#include <string.h>
unsigned int _strlen(const char *s);
/**
 *add_node - adds a node
 *@head: head
 *@str: value
 *Return: a new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(str);
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
/**
 *_strlen - prints the length of a string
 *@s: input
 *Return: integer
 */
unsigned int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
