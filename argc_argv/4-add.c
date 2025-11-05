#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc : numbers of arguments
 * @argv : arrays of arguments
 *
 * Return: 0 on success,
 * 1 if one of the number contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
int a, b, sum;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
{
if (argv[a][b] < '0' || argv[a][b] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
