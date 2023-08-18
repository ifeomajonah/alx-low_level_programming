#include "main.h"

/**
 * print_number - prints integers
 * @n: integrer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int i, r, m;

	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n >= -9 && n <= -1)
	{
		_putchar('-');
		i = -n;
		_putchar(i + '0');
	}
	else if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= -99 && n <= -10)
	{
		_putchar('-');
		r = -n;
		_putchar((r / 10) + '0');
		_putchar((r % 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n <= -100 && n > -1000)
	{
		_putchar('-');
		m = -n;
		_putchar((m / 1000) + '0');
                _putchar(((m / 100) % 10) + '0');
                _putchar(((m / 10) % 10) + '0');
                _putchar((m % 10) + '0');
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
