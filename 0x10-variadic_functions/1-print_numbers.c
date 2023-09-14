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

	if (separator != NULL)
	{
		va_list arg;

		va_start(arg, n);

		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
				printf("%d%s", va_arg(arg, int), separator);
			else
				printf("%d", va_arg(arg, int));
		}
		printf("\n");
		va_end(arg);
	}
}
