#include <stdio.h>
/**
 * print_alphabet_x10 - Function exec point
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int inc;
	char alpha;

	inc = 0;
	while (inc <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		inc++;
			putchar('\n');

	}
}
