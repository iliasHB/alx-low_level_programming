#include <stdio.h>
/**
 * puts2 - Function exec point
 *
 * @str: obtain a string
 *
 * Return: 0 on success
 */
void puts2(char *str)
{
	int inc;

	inc = 0;
	while (*(str + inc) != '\0')
	{
		if (inc % 2 == 0)
				putchar(*(str + inc));
		inc++;
	}
	putchar('\n');
}
