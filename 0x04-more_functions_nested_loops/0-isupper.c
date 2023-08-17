#include "main.h"

/**
 * _isupper - function that checks fro uppercase
 * @c: value to check
 *
 * Return: return 0 for success
 */

int _isupper(int c)
{
	int letter;

	for (letter = 65; letter <= 90; letter++)
	{
		if (c == letter)
			return (1);
	}
	return (0);
}
