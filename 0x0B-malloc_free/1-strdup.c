#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly 
 * allocated space in memory, which contains a copy 
 * of the string given as a parameter
 * @str: pointer to string
 *
 * Return: char
 */

char *_strdup(char *str)
{
        int v = 0, i = 0;
        char *s;

        if (str == 0)
        {
                return (0);
        }

        while (str[v] != '\0')
        {
                v++;
        }

        s = (char *)malloc((v + 1) * sizeof(char));

        if (s == 0)
        {
                return (0);
        }

        while (str[i] != '\0')
        {
                s[i] = str[i];
                i++;
        }

        s[i] = '\0';

        return (s);
}
