#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: a pointer to the string
 *
 */
void puts_half(char *str)
{
int len = 0;
int start, i;
while (str[len] != '\0')
len++;
start = (len + 1) / 2;
for (i = start; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
