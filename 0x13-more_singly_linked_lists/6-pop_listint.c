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

	if (*head == NULL || head == NULL)
		return (0);

	dummy  = (*head)->next;
	result = (*head)->n;
	free(*head);
	*head = dummy;

	return (result);
}
