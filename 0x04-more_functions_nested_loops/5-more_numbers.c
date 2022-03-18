#include <stdio.h>
/**
 * more_numbers - Program entry point
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
			putchar(i + '0');
		}
		putchar ('\n');
	}
	return (0);
}
