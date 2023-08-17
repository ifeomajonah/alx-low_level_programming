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
		number = 0;
		while (number < n)
		{
			_putchar(95);
			number++;
		}
		_putchar('\n');

	}
	else
	{
		_putchar('\n');
	}
}
