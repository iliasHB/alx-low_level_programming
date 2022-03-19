#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Function entry point
 *
 * @size: choose size of triagle
 *
 * Return: 0 on success
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	k = 1;
	if (size <= 0)
		putchar('\n');
	else
	{		
		for (i = 0, j = size - 1; i < size; i++, j--, k++)
		{
			pri_shape(j, ' ');
			pri_shape(k, '#');
			putchar('\n');
		}
	}
}

/**
 * tri_shape - Function entry point
 *
 * @num: enter value for n 
 *
 * @k: print character
 *
 * Return: 0 on success
 */
void pri_shape(int num, char k)
{
	int inc;

	for (inc = 0; inc < num; inc++)
		putchar(k);
}
