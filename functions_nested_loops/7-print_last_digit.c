#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to check
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int c;
c = n % 10;
if (c < 0)
c = -c;
_putchar(c + '0');
return (c);
}
