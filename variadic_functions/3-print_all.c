#include "variadic_functions.h"
#include <stdio.h>
/**
* print_char - prints a char
* @args: argument list
*/
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}
/**
* print_int - prints an int
* @args: argument list
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}
/**
* print_float - prints a float
* @args: argument list
*/
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}
/**
* print_string - prints a string
* @args: argument list
*/
void print_string(va_list args)
{
char *s = va_arg(args, char *);
if (!s)
s = "(nil)";
printf("%s", s);
}
/**
* print_all - prints anything
* @format: format string
*/
void print_all(const char * const format, ...)
{
unsigned int i = 0, j;
char *sep = "";
va_list args;
type_t types[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};
va_start(args, format);
while (format && format[i])
{
j = 0;
while (types[j].symbol)
{
if (format[i] == types[j].symbol)
{
printf("%s", sep);
types[j].print_func(args);
sep = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
