#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: head of list
 * @n: data for new node
 *
 * Return: pointer to list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *dummy = *head;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
		{
			while (dummy->next != NULL)
			{
				dummy = dummy->next;
			}

		dummy->next = new;
		}

		return (new);
	}
	free(new);

	return (NULL);
}
