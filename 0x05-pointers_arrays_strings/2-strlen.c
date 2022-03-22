#include <stdio.h>
/**
 * _strlen - Function exec point
 *
 * @s: pointer to evaluate
 *
 * Return: 0 on Success
 */
int _strlen(char *s)
{
	int inc, c;

	inc = 0;
	c = 0;
	while (*(s + inc) != '\0')
	{
		c++;
		inc++;
	}
	return (c);
}
