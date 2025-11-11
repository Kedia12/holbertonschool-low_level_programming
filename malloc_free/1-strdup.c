#include "main.h"
#include <stdlib.h>
/**
 * char *_strdup - returns a pointer to a newly allocates
 * space in memory,
 * which contains a copy of the string given as a parameter
 * @str: duplicate of the string
 * Return: NULL is str = NULL , On success,
 * the _strdup function returns a pointer to
 * the duplicated string. It returns NULL if
 * insufficient memory was available
 *
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';
return (dup);
}
