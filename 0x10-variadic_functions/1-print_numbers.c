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

	if (n <= 0)
		return;

	if (separator != NULL)
	{
		va_list arg;

		va_start(arg, n);

		for (i = 0; i < n; i++)
		{
			number = va_arg(arg, int);

			if (i < (n - 1))
				printf("%d%s", number, separator);
			else
				printf("%d", number);
		}

		printf("\n");
		va_end(arg);
		}
}
