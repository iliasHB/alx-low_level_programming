#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program entry point
 *
 * Return: 0 on succes.
 */
int main(void)
{
	int n = 0;


	for (; n <= 9; n++)
	{
		putchar(n + '0');
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
