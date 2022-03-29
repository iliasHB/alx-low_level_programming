#include <stdio.h>
#include "main.h"
/**
 * _memset - Pointer method declaration
 *
 * @s: pointer to the memory
 *
 * @b: variable holding constatnt byte
 *
 * @n: size of byte of the memory 
 *
 * Return: 0 on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int inc;

	for (inc = 0; inc < n; inc++)
	{
		*(s + inc) = b;
	}
	*(s + inc) = '\0';
	return (s);
}
