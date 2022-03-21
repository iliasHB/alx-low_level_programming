#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - Function exec point
 *
 * @num: Enter value for num
 *
 * Return: 0 on success
 */
int _abs(int num)
{

	 if  (num == 0)
		 return (0);
	 else if (num < 0)
		 num = abs(num);
	 else
		 num = abs(num);
	 return (num);
}
