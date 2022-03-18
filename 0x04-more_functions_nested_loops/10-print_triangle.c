#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * You can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */

void print_triangle(int size)
{
    int i, j;
    int k = size -1;

    if (size > 0)
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                if (j < k)
                    _putchar(' ');
                else
                    _putchar('#');
            }
            k--;
            _putchar('\n');
        }
    }
    else
        _putchar('\n');
}
