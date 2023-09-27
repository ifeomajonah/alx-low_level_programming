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
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
