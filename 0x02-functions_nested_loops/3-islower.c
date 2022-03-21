#include <stdio.h>
/**
 * _islower - Funtion exec point
 *
 * Return: 0 on success
 */
int _islower(int c)
{
	char alpha;

	alpha = 'a';
	while (alpha < 'z')
	{
		if (c == alpha)
			return (1);
		alpha++;
	}
	return (0);
}

