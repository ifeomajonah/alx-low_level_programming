#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero for success
 */

int main(void)
{
	int n, y, j, result;

	for (n = 0; n <= 1024; n++)
	{
		if (n % 3 == 0)
		{
			j = n + n;

			if (n % 5 == 0)
			{
				y = n + n;
			}
		}
	}

	result = j + y;

	printf("%d\n", result);

	return (0);
}
