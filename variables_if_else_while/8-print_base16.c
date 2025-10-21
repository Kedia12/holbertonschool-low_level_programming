#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
putchar(i + '0');
putchar('\n');
return (0);
}
