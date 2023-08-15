
#include "main.h"

/**
 * print_alphabet_x10 -  function that prints 10 times the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int letter;

	while (i < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
