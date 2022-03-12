#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program entry point
 *
 * Return: 0 on succes.
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
