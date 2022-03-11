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
	long long int p;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a int %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));

	return (0);
}

