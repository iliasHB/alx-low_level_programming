#include <stdio.h>
/**
 * print_sign - Function exec point
 *
 * @n: Enter a value for n
 *
 * Return: 0 on success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if ( n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
