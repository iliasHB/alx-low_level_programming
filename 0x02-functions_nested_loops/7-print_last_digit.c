#include <stdio.h>
/**
 * print_last_digit - Function exec entry point
 *
 * @num: Enter value for num
 *
 * Return: 0 on success
 */
int print_last_digit(int num)
{
	if (num < 1)
		num = num * (-1);
	num = num % 10;
	putchar(num + '0');
	return (num);
}
