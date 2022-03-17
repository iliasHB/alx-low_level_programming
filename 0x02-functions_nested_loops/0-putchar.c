#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 char *str0, str;
         int inc;
         inc = 0;
         str0 = "_putchar";
         str = str0[inc];
         while (str != '\0')
         {
		 putchar(str);											                         inc++;
 		 str = str0[inc];			
	 }
	 putchar('\n');
	 return (0);
}
