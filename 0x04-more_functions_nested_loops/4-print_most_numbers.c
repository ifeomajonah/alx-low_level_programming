#include "main.h"

/**
 * print_most_numbers - a function that print 0 t0 9 but not 2 and 4
 *
 * Return: return is void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number != 50 && number != 52)
			_putchar(number);
	}
	_putchar('\n');
}
