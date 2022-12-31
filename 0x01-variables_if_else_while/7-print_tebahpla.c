#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints lowercase alphabets
 * in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
