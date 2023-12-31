#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: array of integers
 * @n: integers
 *
 * Return: return void
 */

void reverse_array(int *a, int n)
{
	int i, l, p;

	l = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		p = a[i];
		a[i] = a[l];
		a[l--] = p;
	}
}
