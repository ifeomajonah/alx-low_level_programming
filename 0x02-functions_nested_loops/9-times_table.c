#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int z, i, j;

	for (z = 0; z <= 9; z++)
	{
		_putchar('0');

			for (i = 1; i <= 9; i++)
			{
				_putchar(',');
				_putchar(' ');

				j = z * i;

				if (j <= 9)
					_putchar(' ');
				else
					_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		_putchar('\n');
	}
}
