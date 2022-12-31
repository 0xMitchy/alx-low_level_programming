#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints alphabets in lowercase
 * followed by a new line and omits 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		if (alphabets != 'e' && alphabets != 'q')
		{
			putchar(alphabets);
		}
	putchar('\n');

	return (0);
}
