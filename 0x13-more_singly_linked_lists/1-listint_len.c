#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: constant pointer to a structure
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
