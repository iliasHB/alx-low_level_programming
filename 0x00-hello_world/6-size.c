#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("%s %d %s\n", "Size of a char:", sizeof(char), "byte(s)");
	printf("%s %d %s\n", "Size of an int:", sizeof(int), "byte(s)");
	printf("%s %d %s\n", "Size of a long int:", sizeof(long int), "byte(s)");
	printf("%s %d %s\n", "Size of a long long int:",
			sizeof(long long int), "byte(s)");
	printf("%s %d %s\n", "Size of a float:", sizeof(float), "byte(s)");
	return (0);
}
