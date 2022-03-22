#include <stdio.h>
/**
 * _puts - Function exec point
 *
 * @str: pointer to evaluate
 *
 * Return: 0 on Success
 */
void _puts(char *str)
{
	int inc;

	inc = 0;
	while (*(str + inc) != '\0')
	{
		putchar(*(str + inc));
		inc++;
	}
	putchar('\n');
}
