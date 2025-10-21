#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * except q and e
 *
 * Return: Always 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
continue;
putchar (i);
}
putchar('\n');
return (0);
}
