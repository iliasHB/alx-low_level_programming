#include <stdio.h>
/**
 * print_line - Program executing point to draw a straigth line with _.
 *
 * @n: The number of straigth line to draw
 *
 * Return: 0 on success
 */
void print_line(int n)
{
	int len;

	if (n <= 0)
		putchar('\n');
	else
	{
	for (len = 0; len < n; len++)
		putchar('_');
	putchar('\n');
	} 	
	
}
