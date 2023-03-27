#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Find the proper operator to call the proper function
 * @s: Operator to determine proper function to call
 * Return: Pointer to function matching operator
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
int i;

i = 0;
while (ops[i].op != NULL && *(ops[i]).op != *s)
	i++;
return (ops[i].f);
}
