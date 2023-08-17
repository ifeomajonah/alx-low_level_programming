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

	for (number = 0; number < n; number++)
	{
		_putchar(48);

		for (z = 1; z < n; z++)
		{
			_putchar(48);
		}
		_putchar('\n');
	}

	/*if (n > 0)
	{
		for (number = 1; number <= n; number++)
		{
			for (z = 0; z < n; z++)
			{
				_putchar(48);
				_putchar(92);
				_putchar('\n');
			}

			z = 0;
			
			while (z < n)
			{
				_putchar(48);
				_putchar('\n');
				z++;
			}

			_putchar(92);
			_putchar('\n');
		}
	}*/
}
