#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
        
	i = 1;
	while (i <= 100)
        {
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else 
			printf("%d ", i);
		i++;        	
        } 
        putchar('\n');
	return (0);
}
