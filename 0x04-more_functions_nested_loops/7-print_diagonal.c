#include "main.h"

/**
 * print_diagonal - print diagonal line on the terminal
 * @n: number of diagonal line to print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int number, z;

	if (n > 0)
	{
		for (number = 0; number < n; number++)
		{
			z = number;
			while (z--)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	_putchar('\n');


}
