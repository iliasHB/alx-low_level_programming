#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	char c = 'a';


	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
