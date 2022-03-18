#include <stdio.h>
/**
 * _isdigit - Program entry point
 *
 * @k: _isdigit function expexting number
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int k)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if (j == k)
			return (1);
	}
	return (0);
}
