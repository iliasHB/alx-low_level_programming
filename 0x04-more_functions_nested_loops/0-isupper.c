#include <stdio.h>
/**
 * _isupper - Program Entry point
 *
 * @c: Number to pass to _isupper function
 *
 * Return: 0 on Success
 */
int _isupper(int k)
{
	int j;

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (j == k)
			return (1);
	}
	return (0);
}
