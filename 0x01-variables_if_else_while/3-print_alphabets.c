#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program entry point
 *
 * Return: 0 on succes. Error code otherwise
 */
int main(void)
{
	char c = 'a';


	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	c = 'A';
	for (; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
