#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @args: va_list containing the character
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}
/**
 * print_int - prints an integer
 * @args: va_list containing the integer
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}
/**
 * print_float - prints a float
 * @args: va_list containing the float
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}
/**
 * print_string - prints a string
 * @args: va_list containing the string
 *
 * Description: prints "(nil)" if the string is NULL
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
}
/**
 * print_all - prints anything based on a format string
 * @format: a string containing format characters
 *
 * Description: 'c' = char, 'i' = int, 'f' = float, 's' = string
 * Prints elements separated by ", ". Prints a newline at the end.
 * Ignores any other characters.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *sep = "";
type_t types[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
va_start(args, format);
while (format && format[i])
{
j = 0;
while (types[j].symbol)
{
if (format[i] == *(types[j].symbol))
{
printf("%s", sep);
types[j].print_func(args);
sep = ", ";
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
