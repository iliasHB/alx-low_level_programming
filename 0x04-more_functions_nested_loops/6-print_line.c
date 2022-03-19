#include <stdio.h>
/**
 * print_line - Draws a straight line using the character _.
 *
 * @n: The number of _ characters to be printed.
 *
 * Return: 0 on success
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
	for (len = 0; len < n; len++)
		putchar('_');
	}  
	putchar('\n');
	
}
