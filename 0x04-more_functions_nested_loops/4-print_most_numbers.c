#include <stdio.h>
/**
 * print_most_numbers - Program entry point
 *
 * Return: 0 on Success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		putchar(i + '0');
	}
	putchar('\n');
}
