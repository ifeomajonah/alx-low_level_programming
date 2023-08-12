/* Alphabet soup with putchar */
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: function that prints lowercase
 * excluding some alphabets
 * Return: return 0 for succes
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n');

	return (0);
}
