#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 *
 * Return: no return value
 */

void jack_bauer(void)
{
	int y, m, z, s;

	for (y = 0; y <= 2; y++)
	{
		for (m = 0; m <= 3; m++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (s = 0; s <= 9; s++)
				{
					_putchar(y + '0');
					_putchar(m + '0');
					_putchar(':');
					_putchar(z + '0');
					_putchar(s + '0');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
