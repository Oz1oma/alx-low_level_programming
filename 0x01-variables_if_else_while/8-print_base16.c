#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 * Prints the base 16 in lowercase
 */
int main(void)
{
	int num;
	char ch = 'a';

	for (num = 0; num <= 9; num++)
		putchar(num + 48);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
