#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: number of arguements
 * @...: aclipse
 *
 * Return: integere
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int total, i, next;

	va_list arg;

	va_start(arg, n);


	if (n == 0)
		return (0);

	total = 0;
	for (i = 0; i < n; i++)
	{
		next  = va_arg(arg, int);
		total = total + next;
	}

	va_end(arg);
	return (total);
}
