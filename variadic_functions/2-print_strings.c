#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings separated by a string
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 *
 * Description: Prints a newline at the end. If separator is NULL,
 * strings are printed without a separator.
 * If one of the strings is NULL, print (nil) instead
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
