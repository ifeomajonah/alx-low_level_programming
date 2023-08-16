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

	if ((n = 0) || (n < 9))
	{
		for (n = n; n < 10; n++)
		{
			_putchar(n + '0');
			_putchar(' ');
		}

			for (j = n; j < 98; j++)
			{

				for (z = 0; z < 98; z++)
				{
					_putchar((j / 10) + '0');
					_putchar((z % 10) + '0');
					_putchar(' ');
				}
			}
	
	}
}
