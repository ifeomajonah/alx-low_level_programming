#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: String to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int m;
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (m = l; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar(10);

}
