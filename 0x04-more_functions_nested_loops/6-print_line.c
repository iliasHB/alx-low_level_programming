#include <stdio.h>
#include "main.h"
/**
 * print_line - Function entry point
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
