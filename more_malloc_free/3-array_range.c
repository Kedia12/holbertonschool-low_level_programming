#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: The smallest integer
 * @max: The largest integer
 * Return: the pointer to the newly created array,
 * NULL if min > max, NULL if malloc fails
 *
 */
int *array_range(int min, int max)
{
int *array;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array [i] = min + i;
return (array);
}
