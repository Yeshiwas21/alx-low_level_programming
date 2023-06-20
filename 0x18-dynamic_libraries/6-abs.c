#include "main.h"

/**
*_abs - a function that computes the absolute value of an integer
*
*@n: Parameter to be checked
*
*Return: Always n (Successful)
*/

int _abs(int n)
{

if (n < 0)
n = -(n);
else if (n >= 0)
n = n;
return (n);
}
