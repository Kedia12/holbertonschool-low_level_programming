#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function for an operator
 * @s: operator passed as argument (string)
 *
 * Description: The function searches a table of operators and
 * their corresponding functions. It returns a pointer to the
 * correct function if the operator is valid, or NULL if invalid.
 *
 * Return: pointer to function corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))
return (ops[i].f);
i++;
}
return (NULL);
}
