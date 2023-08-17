#include "main.h"

/**
 * _isdigit - check for digit 0 -9
 * @c: integer to check
 *
 * Return: return 0 for failure
 */

int _isdigit(int c)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (c == number)
			return (1);
	}
	return (0);
}
