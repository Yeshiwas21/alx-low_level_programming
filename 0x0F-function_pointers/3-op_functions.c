#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return sum of a & b
 * @a: First int to add
 * @b: Second int to add
 *
 * Return: (a + b)
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Return difference of a & b
 * @a: First int to sub
 * @b: Second itn to sub
 *
 * Return: (a - b)
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Return product of a & b
 * @a: First int to multiply
 * @b: Second int to multiply
 *
 * Return: (a * b)
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Return quotient of a & b
 * @a: Int to divide
 * @b: Int to divide by
 *
 * Return: (a / b)
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - Return remainder of a & b
 * @a: Int to mod
 * @b: Int to mod by
 *
 * Return: (a % b)
 */
int op_mod(int a, int b)
{
return (a % b);
}
