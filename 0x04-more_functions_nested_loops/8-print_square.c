#include "main.h"

/**
 * print_square - print a square followed by a new line
 * @size: number of squares to print
 *
 * Return: void
 */

void print_square(int size)
{
	int number, z;

	if (size > 0)
	{
		for (number = 0; number < size; number++)
		{
			_putchar(35);
			for (z = 1; z < size; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
