#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: Always void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
