#include <stdio.h>
/**
 * print_numbers - Program entry point
 *
 * Return: 0 on Success
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
			putchar(n + '0');
	putchar('\n');
}
