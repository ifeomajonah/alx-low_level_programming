/* Program to output lowercase of teh alphabet */
#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase
 *
 * Return: return void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
