#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i / 10) + '0');
		_putchar(',');
		_putchar(' ');
		
	}

	_putchar('\n');
	
	for (j = 0; j <= 9; j++)
	{
		_putchar((j % 10) + '0');
		_putchar(',');
		_putchar(' ');
	
	}

	_putchar('\n');

	for (k = 0; k < 20; k+=2)
	{
		_putchar((k % 10) + '0');
		_putchar(',');
		_putchar(' ');

		if (k >= 10)
		{
			for (l = 0; l <= 8; l+=2)
			{
				/* _putchar((k % 10) + '0'); */
				_putchar(l + '0');
			}
		}
	}
			
	_putchar('\n');	

	
}
