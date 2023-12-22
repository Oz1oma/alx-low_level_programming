#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 * prints alphabets in reverse order
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; --ch)
		putchar(ch);
	putchar('\n');
	return (0);
}
