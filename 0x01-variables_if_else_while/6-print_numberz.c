#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 * Prints the number from 0 to 9
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; (ch <= '9'); ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
