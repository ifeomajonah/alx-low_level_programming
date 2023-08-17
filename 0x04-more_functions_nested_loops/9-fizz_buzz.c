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
	char text[20], text_[20], text_two[20];
	char fuzz[20] = "Fizz";
	char buzz[20] = "Buzz";
	char fb[20] = "FizzBuzz";

	/**
	 * sprintf - converts a number to a string and stores it
	 * strcpy - swaps teh content of a string
	 * printf - prints on the terminal
	 */

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			sprintf(text_two, "%d", number);
			strcpy(text_two, fb);
			printf("%s ", text_two);
		}
		else if (number % 3 == 0)
		{
			sprintf(text, "%d", number);
			strcpy(text, fuzz);
			printf("%s ", text);
		}
		else if (number % 5 == 0)
		{
			sprintf(text_, "%d", number);
			strcpy(text_, buzz);
			printf("%s ", text_);
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("\n");

	return (0);
}