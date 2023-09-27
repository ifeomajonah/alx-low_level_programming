#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to a constant structure
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
