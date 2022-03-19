#include <stdio.h>

#include "main.h"
/**
 * print_diagonal - Program entry point
 *
 * @n: Numer of diagonals to print
 *
 * Return: 0 on Success
 */
void print_diagonal(int n)
{
	int i;

	if(n <= 0)
		putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			print_space(i);
			putchar('\\');
			putchar('\n');
			i++;
		}
	}
}

/**
 * print_space -  Program funtion 
 *
 * @n: Number of spaces to print
 *
 * Return: o on success
 */
void print_space(int n)
{
	int j;

	j = 0;
	while (j < n)
	{
		putchar(' ');
		j++;
	}
}
