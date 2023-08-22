#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: array to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int half, w;
	int v = 0;

	while (str[v] != '\0')
	{
		v++;
	}
	half = v / 2;
	if (v % 2 == 0)
	{
		for (; half < v; half++)
			_putchar(str[half]);
	}
	else if (v % 2 != 0)
	{
		w = (v - 1) / 2;
		for (; w < v; w++)
			_putchar(str[w]);
	}
	_putchar(10);
}
