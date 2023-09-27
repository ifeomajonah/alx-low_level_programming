#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list
 * @head: pointer to pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *dummy;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		dummy = (*head)->next;
		free(*head);

		*head = dummy;
	}

	*head = NULL;
}
