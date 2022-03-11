#include <stdio.h>

/**
 * main - The Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char b;
	long int y;
	float z;

	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(z));

	return (0);
}

