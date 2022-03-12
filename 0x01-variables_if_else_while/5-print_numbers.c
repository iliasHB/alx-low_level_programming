#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
