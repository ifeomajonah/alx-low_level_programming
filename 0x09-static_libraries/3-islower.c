#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: The character to find
 *
 * Return: returns 1 if c is lower case
 */

int _islower(int c)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}

	}

	return (0);
}
