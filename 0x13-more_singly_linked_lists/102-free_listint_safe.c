#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head node of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *node, *next_node;

	if (h == NULL)
		return (0);

	node = *h;
	while (node != NULL)
	{
		count++;
		next_node = node->next;
		free(node);
		if (next_node >= node)
		{
			*h = NULL;
			return (count);
		}
		node = next_node;
	}

	*h = NULL;
	return (count);
}
