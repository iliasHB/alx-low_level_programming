#include <stdio.h>
#include "main.h"
/**
 * _memcpy - pointer method to copy memmory
 *
 * @dest: pointer to destination memory 
 *
 * @src: pointer to source memory
 *
 * @n: number of bytes of the memory area 
 *
 * Return: 0 on success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int inc;

	for (inc = 0; inc < n; inc++)
	{
		*(dest + inc) = *(src + inc);
	}
	*(dest + inc) = '\0';
	return (dest);
}
