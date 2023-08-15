#include "main.h"
/**
 * print_to_98 - functions that prints natural number
 * @n: Integer it starts wiht
 *
 * Return: void
 */

void print_to_98(int n)
{
	int j, z;

	if (n < 9)
	{
		while (n <= 9)
		{
			_putchar(n + 48);
			_putchar(',');
			n++;
		}

		j = n;

		for (j = n; j < 30; j++)
		{
			for (z = 0; z < 30; z++)
			{
				_putchar((j % 10) + 48);
				_putchar((z % 10) + 48);
				_putchar(',');
			}
		}
	}
}
