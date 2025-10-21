#include "main.h"
/**
 * main - prints _putchar followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
char str[] = "_putchar";
for (i = 0; str[i]; i++)
_putchar(str[i]);
_putchar('\n');
return (0);
}
