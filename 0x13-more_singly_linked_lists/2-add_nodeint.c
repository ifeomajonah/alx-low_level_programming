#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to a const pointer
 * @n: integer
 *
 * Return: pointer to a structure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new  = (listint_t *)malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;

		*head = new;

		return (new);
	}
	free(new);

	return (NULL);
}
