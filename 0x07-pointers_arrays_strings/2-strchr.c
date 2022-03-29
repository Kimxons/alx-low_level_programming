#include <stdlib.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *
 * @s: the string to check
 * @c: the character we're looking for
 *
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 */
char *_strchr(char *s, char c)
{
    do
    {
        if (*s != c)
        {
            s++;
        }
        else
        {
            return (s);
        }
    }
    while (*s);

    if (c == '\0')
        return (s);

    return (NULL);
}