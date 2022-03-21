#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - Entry point
 *
 * @num: Second Number to add
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int num)
{
	int MAX;

	MAX = 98;
	if (num > MAX)
	{
		for (; num >= MAX; num--)
		{
			if (num == MAX)
				printf("%d\n", num);
			else
				printf("%d, ", num);
		}
	}
	else
	{
		for (; num <= MAX; num++)
		{
			if (num == MAX)
				printf("%d\n", num);
			else
				printf("%d, ", num);
		}
	}
}
