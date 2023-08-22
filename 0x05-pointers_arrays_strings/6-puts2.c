#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int z;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (z = 0; z < i; z += 2)
	{
		_putchar(str[z]);
	}
	_putchar(10);
}
