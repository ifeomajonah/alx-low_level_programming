#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: returns value of last digit
 */

int print_last_digit(int num)
{
	int lastnum;

	lastnum = num % 10;
	 if (lastnum < 0)
	{
		lastnum = lastnum * -1;
		/*_putchar(lastnum);*/
	}
	
	_putchar(lastnum + '0');
	

	return (lastnum);
}
