#include "lists.h"

/**
 * pop_listint - function that deletes the head node of list
 * @heade: pointer to pointer
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	if (head == NULL)
		return (0);
	
