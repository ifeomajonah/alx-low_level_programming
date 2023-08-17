#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of triangle
 *
 * Return: returns void
 */

void print_triangle(int size)
{
	int number, m, p;

	if (size > 0)
	{
		for (number = 1; number <= size; number++)
		{
			m = size - number;
			while (m--)
			{
				_putchar(' ');
			}
			p = number;
			while (p--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
