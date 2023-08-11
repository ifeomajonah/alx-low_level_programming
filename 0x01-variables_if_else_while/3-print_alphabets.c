/* Using putchar to print */
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Program that prints alphabet in lowercase
 * then in uppercase followed by a new line
 * Return: return 0 for success
 */

int main(void)
{
	char uppercase = 'A';
	char lowercase = 'a';
	/**
	 * putchar - outputs character and string
	 * while - runs through a condition
	 */

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}
