#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Program entry point
 *
 * Return: 0 on success
 */
void more_numbers(void)
{
	int j;
	int i;

	j = 0;
	i = 0;
	while (j <= 10)
	{
		while (i <= 14) 
		{
			print_num(i);
			i++;
		}
		j++;
		putchar ('\n');
	}
}

/**
 * print_num - pass a value to the fuction
 *
 * @n - enter an interger value for n
 *
 * Return: chars
 */
void print_num(int n)
{
	if (n / 10)
	{
		print_num(n / 10);
	}
	putchar(n % 10 + '0');
}
