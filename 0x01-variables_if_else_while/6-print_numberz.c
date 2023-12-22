#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 * Prints the number from 0 to 9
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(48 + num);
	putchar('\n');
	return (0);
}
