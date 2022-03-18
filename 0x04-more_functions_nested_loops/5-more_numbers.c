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

	j = 0;
	i = 0;
	while (j <= 10)
	{
		while (i <= 14) 
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			i++;
		}
		j++;
		putchar ('\n');
	}
	return (0);
}
