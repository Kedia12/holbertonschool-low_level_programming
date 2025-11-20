#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything based on format
 * @format: list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0;
char *sep = "";
char *s;
char c;
int n;
double f;
va_start(ap, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(ap, int);
printf("%s%c", sep, c);
sep = ", ";
break;
case 'i':
n = va_arg(ap, int);
printf("%s%d", sep, n);
sep = ", ";
break;
case 'f':
f = va_arg(ap, double);
printf("%s%f", sep, f);
sep = ", ";
break;
case 's':
s = va_arg(ap, char *);
if (!s)
s = "(nil)";
printf("%s%s", sep, s);
sep = ", ";
break;
default:
break;
}
i++;
}
}
printf("\n");
va_end(ap);
}