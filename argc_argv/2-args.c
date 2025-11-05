#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc : number of arguments
 * @argv : arrays of arguments
 *
 * Return: 0 (Always Success)
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
