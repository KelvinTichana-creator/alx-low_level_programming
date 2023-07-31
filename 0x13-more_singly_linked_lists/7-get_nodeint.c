#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head node of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: If the node does not exist, return NULL. Otherwise, return a
 *         pointer to the nth node of the listint_t list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	return (current);
}
