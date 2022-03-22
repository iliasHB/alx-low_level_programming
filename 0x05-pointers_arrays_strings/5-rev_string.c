#include <stdio.h>
#include "main.h"
/**
 * rev_string - Function exec point
 *
 * @s: obtain string
 *
 * Return: 0 on Success
 */
void rev_string(char *s)
{
	int i, count, j, a;
	char p[500];

	a = 0;
	count = _strlen(s);
	while (*(s + a) != '\0')
	{
		p[a] = *(s + a);
		a++;
	}

	for (i = count - 1, j = 0; i >= 0; i--, j++)
	{
		*(s + j) = p[i];
	}
}

/**
 * _strlen - Function exec point
 *
 * @s: obtain a string
 * 
 * Return: 0 on success
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
