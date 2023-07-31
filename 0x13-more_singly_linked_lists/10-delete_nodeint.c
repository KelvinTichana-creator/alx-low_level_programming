#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: A pointer to the head node of the listint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: If the function succeeds - 1.
 *         Otherwise - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int current_idx = 0;

	if (*head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && current_idx < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		current_idx++;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
