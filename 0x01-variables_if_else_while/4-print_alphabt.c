#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 * A code that prints the lowercase alphabets except q and e.
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar (ch);
	}
	putchar('\n');

	return (0);
}
