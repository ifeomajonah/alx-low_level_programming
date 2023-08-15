#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: returns value of last digit
 */

int print_last_digit(int num)
{
	int ten = 10;
	int c = num % ten;

	_putchar(c + 48);

	return (c);
}
