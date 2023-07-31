#include "lists.h"
#include <stddef.h>
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head node of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
