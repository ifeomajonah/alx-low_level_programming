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
		for (m = 0; m <= 9; m++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (s = 0; s <= 9; s++)
				{
					if (!( y == 2 && (m >= 4)))
							{
								_putchar(y + '0');
								_putchar(m + '0');
								_putchar(':');
								_putchar(z + '0');
								_putchar(s + '0');
								_putchar('\n');
								
							} else {
								_putchar(' ');
							}
				}
			}
		}
	}
	_putchar('\n');
}
