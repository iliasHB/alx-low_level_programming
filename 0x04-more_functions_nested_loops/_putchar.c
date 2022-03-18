#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @x: x is the character value
 * 
 * Return: On success 1.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
