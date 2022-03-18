#include <stdio.h>
/**
 * print_numbers - Program entry point
 *
 * Return: 0 on Success
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
}
