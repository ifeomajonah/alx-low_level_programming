#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator:  string to be printed between numbers
 * @n: number of arguements
 * @...: aclipse
 *
 * Return: integere
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list arg;

	if (separator == NULL)
		separator = "";

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(arg, int);
		printf("%d", number);

		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
