#include "main.h"

/**
 * _strncat - two strings
 * 
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int k;
int i;

k = 0;

for (i = 0; i < 1000; i++)
{
if (dest[i] == '\0')
{
break;
}
k++;
}

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[k + i] = src[i];
}
dest[k + i] = '\0';
return (dest);
}
