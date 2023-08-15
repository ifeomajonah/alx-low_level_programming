/**
 * _isalpha - funtion that check for alphabetic character
 * @c: The integer to check for character
 *
 * Return: return 1 if successful otherwise 0
 */

int _isalpha(int c)
{
	int lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		{
			if (c == lowercase || c == uppercase)
				return (1);
		}
	}
	return (0);
}
