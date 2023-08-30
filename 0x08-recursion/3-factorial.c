#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: given number (integer)
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	
	return (factorial(n * (n - 1)));

	
}
