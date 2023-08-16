#include "main.h"
/**
 * print_to_98 - functions that prints natural number
 * @n: Integer it starts wiht
 *
 * Return: void
 */

void print_to_98(int n)
{

	int j, z, p;

	if (n == 0 && n <= 9)
	{
		for (p = n; n < 9; p++)
		{
			_putchar(n + '0');
		}

                for (j = 10; j < 99; j++)
                {
                        for (z = 10; z < 99; z++)
                        {
                                _putchar((j / 10) + '0');
                                _putchar((z % 10) + '0');

                                if (n != 98)
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                }
                        }
                }
	}
	else if (n > 9 )
	{
		for (j = n; j < 99; j++)
		{
			for (z = n; z < 99; z++)
			{
				_putchar((j / 10) + '0');
				_putchar((z % 10) + '0');

				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}


}
