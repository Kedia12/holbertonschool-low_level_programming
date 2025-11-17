#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name -  prints a name using a callback function
 * @name: the name to print
 * @f: pointer to function that prints a string
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
f(name);
}
