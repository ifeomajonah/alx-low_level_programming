#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: Number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int result, see;

	if (n == 0 || n == 1)
		_putchar (n + '0');

	if ( n > 1)
	{

		result = n;
		while ((result != 0) & 1)
		{
			result = n >> 1;
			see = _remainder(n, result);
			n = result;
			printf("%ld\n", see);
			
		}

}
		
	
}

unsigned long int _remainder (unsigned long int big, unsigned long int small)
{
	while (big >= small)
	{
		big = big - small;
	}

	return (big);
}

