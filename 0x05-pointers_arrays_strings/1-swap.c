#include <stdio.h>
/**
 * swap_int - Function exec point
 *
 * @a: obtain string 
 *
 * @b: obtain string
 *
 * Return: 0 on success
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
