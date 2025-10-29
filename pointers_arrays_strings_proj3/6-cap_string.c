#include "main.h"
/**
 * is_separator - checks if a character is a word separator
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
char seps[] = " \t\n,;.!?\"(){}";
int i = 0;
while (seps[i])
{
if (c == seps[i])
return (1);
i++;
}
return (0);
}
/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
int i = 0;
while (s[i])
{
if ((i == 0 || is_separator(s[i - 1])) && s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - ('a' - 'A');
}
i++;
}
return (s);
}
