#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print
 * both upper and lower case alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph;
	int ABET;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (ABET = 'A'; ABET <= 'Z'; ABET++)
		putchar(ABET);

	putchar('\n');

	return (0);
}
