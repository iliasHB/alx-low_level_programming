#include <stdio.h>
/**
 * _isupper - Program entry point
 *
 * @k: _isupper function is expecting value for k
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
