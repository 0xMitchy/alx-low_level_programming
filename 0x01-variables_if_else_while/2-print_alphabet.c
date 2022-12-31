#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * A program that prints alphabets in lowercase
 *
 * Return: 0 Always(Success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
