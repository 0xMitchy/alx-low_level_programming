#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Description: prints size of data types
 *
 * Return: 0, always
 */

int main(void)
{
	unsigned int a = sizeof(char);
	unsigned int b = sizeof(int);
	unsigned int c = sizeof(long);
	unsigned int d = sizeof(long long);
	unsigned int e = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", a);
	printf("Size of an int: %lu byte(s)\n", b);
	printf("Size of a long int: %lu byte(s)\n", c);
	printf("Size of a long long int: %lu byte(s)\n", d);
	printf("Size of a float: %lu byte(s)\n", e);

	return (0);
}
