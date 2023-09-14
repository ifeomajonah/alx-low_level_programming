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

	if (separator != NULL)
	{
		va_list list;

		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			flex = va_arg(list, char *);
			if (flex == NULL)
				printf("(nil)");

			if (i < (n - 1))
				printf("%s%s", flex, separator);
			else
				printf("%s", flex);
		}
	printf("\n");
	va_end(list);
	}

}
