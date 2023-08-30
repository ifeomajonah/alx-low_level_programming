#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to string
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
	       	_strlen_recursion(s + 1);
	}

	i++;
	return (i - 1);
}
