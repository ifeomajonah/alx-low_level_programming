#include "lists.h"

/**
 * free_listint -  function that frees a listint_t list
 * @head: list to free
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *dummy = head;

	while (head != NULL)
	{
		dummy = head->next;
		free(head);
		head = dummy;
	}
}
