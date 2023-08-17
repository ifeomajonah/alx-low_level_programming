#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: number of lines
 *
 * Return: integer
 */

void print_line(int n)
{
	int number;

	if (n > 0)
	{
		for (number = 0; number <= n; number++)
			_putchar('_');
	}

	_putchar('\n');

}
