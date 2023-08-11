/* Positive Programming */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point of function
 *
 * @n: The random generated number
 * Description: function creates a random number
 * output is dependent on the random number
 * condition is displayed using if else statement
 * Return: return 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
