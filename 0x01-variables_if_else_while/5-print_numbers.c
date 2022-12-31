#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all digits, base 10
 * starting from 0 to 9.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	printf("\n");

	return (0);
}
