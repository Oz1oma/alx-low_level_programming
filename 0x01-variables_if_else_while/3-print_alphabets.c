#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 * The code prints the alphabet in lower and uppercases
 */
int main(void)
{
	char ch = 'a';
	char bch = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (bch = 'A'; bch <= 'Z'; bch++)
		putchar(bch);
	putchar('\n');
	return (0);
}
