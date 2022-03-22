#include <stdio.h>
#include "main.h"
/**
 * print_rev - Function exec point
 *
 * @s: pointer to evaluate
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i, count;

	count = _strlen(s);

	for (i = count - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}

/**
 * _strlen - Function exc point
 *
 * @s: pointer to the string
 *
 * Return: 0 on Success
 */
int _strlen(char *s)
{
	int i, count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
