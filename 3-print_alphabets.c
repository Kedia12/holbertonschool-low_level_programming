#include <stdio.h>

/** 
 * main - prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: Always 0
 */

int main(void)
{
char c;
char d;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (d = 'A'; d <= 'Z'; d++)
putchar(d);
putchar('\n');
return (0);
}
