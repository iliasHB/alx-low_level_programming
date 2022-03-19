#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Program Entry point
 * 
 * Return: 0 on success
 */
void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++) 
		{
			print_num(i);
		}
		putchar('\n');
	}
}

/**
 * print_num - pass a value to the fuction
 *
 * @n: enter an interger value for n
 *
 * Return: 0 0n success
 */
void print_num(int n)
{
	if (n / 10)
	{
		print_num(n / 10);
	}
	putchar(n % 10 + '0');
}
