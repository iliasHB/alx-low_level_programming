#include <stdio.h>
/**
 * print_alphabet - Function exec point
 *
 * Return: 0 0n success
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
