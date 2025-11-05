#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of agruments passed into it
 * @argc : number of arguments
 * @argv : array of arguments
 *
 * Return: 0 (Always Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
