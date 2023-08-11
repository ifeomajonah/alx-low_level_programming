#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Function that prints all alphabest in lowercase
 * Return: return 0
 */

int main(void)
{
	char lowercase =  'a';
	/**
	 * @lowercase: used to store all lower case alphabets
	 * while - executes a statment whole true
	 * putchar - outputs characters and string
	 */

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');

	return (0);
}
