#include <stdio.h>
/**
 * print_square - funtion entry point
 *
 * @size: size of the square
 *
 * Return: 0 on success
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
	putchar ('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				putchar('#');
				j++;
			}
			i++;
			putchar('\n');
		}
	}
}
