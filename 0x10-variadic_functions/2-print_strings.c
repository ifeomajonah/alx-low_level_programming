#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator:  string to be printed between strings
 * @n: number of arguements
 * @...: aclipse
 *
 * Return: nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *flex;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		flex = va_arg(list, char *);

		if (flex == NULL)
			printf("(nil)");
		else
			printf("%s", flex);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(list);

}
