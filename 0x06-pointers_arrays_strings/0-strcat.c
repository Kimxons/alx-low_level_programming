#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
int k;
int l;

k = 0;
l = 0;

while (dest[k] != '\0')
{
k++;
}

while (src[l] != '\0')
{
dest[k] = src[l];
l++;
k++;
}

dest[k] = '\0';
return (dest);
}