#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: the integer value represented by the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;
while (s[i])
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] == '+')
{
}
else if (s[i] >= '0' && s[i] <= '9')
{
break;
}
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
return (num * sign);
}
