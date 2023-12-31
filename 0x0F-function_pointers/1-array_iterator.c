#include <stddef.h>
#include "function_pointers.h"


/**
 * array_iterator -  function that executes a function given as
 * a parameter on each element of an array
 * @array: Pointer to an array
 * @size: size of array;
 * @action: pointer to function
 *
 * Return: Nothing.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
