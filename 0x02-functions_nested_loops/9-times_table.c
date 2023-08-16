#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, l, result;

	for (i = 0; i <= 9; i++)
	{
		for (l = 0; l <= 9; l++)
		{
			result = i * l;

			if (l == 0 && result == 0)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}

			if (l == 9 && result == 0)
                                {
                                        _putchar(' ');
                                        _putchar(result + '0');
                                }

			  if (l == 9 && result == 9)
                                {
                                        _putchar(' ');
                                        _putchar(result + '0');
                                }
			if (result <= 9)
			{
				/* if (l == 9 && result == 0 && result == 9)*/
                               /* {
                                        _putchar(' ');
                                        _putchar(result + '0');
                                }*/

				/*if (l == 0 && result == 0)
				{
					_putchar(result + '0');
					_putchar(',');
					_putchar(' ');
				}*/

				/*if (l == 9 && result == 0 && result == 9)
				{
					_putchar(' ');
					_putchar(result + '0');
				}*/

				if(l != 9 && result <= 9)
				{
					_putchar(' ');
					_putchar(result + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');

			}
			 if (l != 9 && result > 9)
			{
				_putchar(',');
				_putchar(' ');
			}


		}
			_putchar('\n');
	}


}
