#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to check for length
 *
 * Return: returns an integer
 */

int _strlen(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		s++;
	}

	return (result);
}
