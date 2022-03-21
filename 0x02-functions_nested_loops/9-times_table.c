#include <stdio.h>
#include "main.h"
/**
 * times_table - Function entry point
 *
 * Return: 0 0n success
 */
void times_table(void)
{
	int inc;
	int val;
	int isNot_Decimal;
	int mul;

	isNot_Decimal = 0;
	for (inc = 0; inc <= 9; inc++)
	{
		for (val = 0; val <= 9; val++)
		{
			mul = inc * val;
			isNot_Decimal = calc_num(mul);
			if (val < 9)
			{
				putchar(',');
				if (!isNot_Decimal)
					putchar(' ');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
/**
 * calc_num - Function entry point
 *
 * @num: Enter a value
 *
 * Return: 0 on success
 */
int calc_num(int num)
{
	int isNot_Decimal = 0;
	if (num / 10)
	{
		isNot_Decimal = 1;
		calc_num(num / 10);
	}
	putchar(num % 10 + '0');
	return (isNot_Decimal);
}
