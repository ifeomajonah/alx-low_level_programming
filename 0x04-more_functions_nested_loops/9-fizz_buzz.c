#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	int number;
	
	/**
	 * printf - prints on the terminal
	 */

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("\n");

	return (0);
}
