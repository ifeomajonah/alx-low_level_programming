#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This programs generates a random interger,
 * extract the last digit and print it and check a few other
 * conditions before outputing result
 * Return: return 0 to indicate success
 */

int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10;
	/**
	 * printf - prints a message based on the inputted values
	 * @d: Last didgit of random number
	 */
	if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else if (d < 6 && d != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
