#include <stdio.h>
/**
 * _isalpha - Funtion exec point
 *
 * Return: 0 on success
 */
int _isalpha(int c)
{
	char l_alpha;
	char u_alpha;

	for (l_alpha = 'a', u_alpha = 'A'; l_alpha <= 'z'; l_alpha++, u_alpha++)
	{
		if (c == l_alpha || c == u_alpha)
			return (1);
	}
	return (0);
}
