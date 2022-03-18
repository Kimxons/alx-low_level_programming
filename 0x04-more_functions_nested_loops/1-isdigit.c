#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9)
 * @c: The input character
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
    char i = '0';
    int _isdigit = 0;

    for (; i <= '9'; i++)
    {
        if (i == c)
        {
            _isdigit = 1;
            break;
        }
    }
    return (_isdigit);
}
