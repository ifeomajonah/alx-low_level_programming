#include "lists.h"

/**
 * pop_listint - function that deletes the head node of list
 * @head: pointer to pointer
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int result;
	listint_t *dummy;

	if (head == NULL)
		return (0);

	dummy = *head;
	*head = (*head)->next;
	result = dummy->n;
	free(dummy);

	return (result);
}
