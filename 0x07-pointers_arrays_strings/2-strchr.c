#include <stdio.h>
#include "main.h"
/**
 * _strchr - Pointer method exec point
 *
 * @s: pointer to a character
 *
 * @c: character to find 
 *
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	int inc;

	inc = 0;
	while (*(s + inc) != '\0')
	{
		if (*(s + inc) == c)
			return (&(s[inc]));
		i++;
	}
	return (NULL);
}
