#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a list
 * @head: pointer to list head
 * @index: nth node to return
 *
 * Return: pointer to a structure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *newy = head;

	if (head == NULL)
		return NULL;

	i = 0;
	while (newy != NULL && i != index)
	{
		newy = newy->next;

		i++;
	}
	if (newy-> == NULL && i != index)
		return NULL;

	return (newy);
}
