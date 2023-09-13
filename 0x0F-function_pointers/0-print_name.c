#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to name to print
 * @f: pointer to function*
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	/**
	 * f - function pointer
	 * @*: pointer to a char
	 *
	 * Return: nothing
	 */

	f(name);
}
