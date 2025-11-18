#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs simple operations using function pointers
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Description: The program takes exactly 3 arguments:
 *  num1 operator num2
 *  It validates the input, checks that the operator is a single
 *  character, selects the correct operation using get_op_func,
 *  checks for division/modulo by zero, performs the operation,
 *  and prints the result.
 *
 * Return: 0 on success, exits with 98, 99, or 100 on errors
 */
int main(int argc, char *argv[])
{
int a, b, result;
int (*op)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
op = get_op_func(argv[2]);
if (op == NULL)
{
printf("Error\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
result = op(a, b);
printf("%d\n", result);
return (0);
}
