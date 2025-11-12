#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates s1 and first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated string, or NULL if malloc fails
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *ptr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n > len2)
n = len2;
ptr = malloc(len1 + n + 1);
if (ptr == NULL)
return (NULL);
for (i = 0; i < len1; i++)
ptr[i] = s1[i];
for (j = 0; j < n; j++)
ptr[i + j] = s2[j];
ptr[i + j] = '\0';
return (ptr);
}
