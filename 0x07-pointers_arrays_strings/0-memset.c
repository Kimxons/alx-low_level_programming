#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * 
 * @c: pointer to memory area to fill
 * @n: number of bytes to fill
 * @k: constant byte
 * 
 * Return: A pointer to the memory area @c
 */

char *_memset(char *c, char k, unsigned int n)
{
    unsigned int j;
    for (j = 0; j < n; j++)
    {
        c[j] = k;
    }
    return (c);
}
