#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse contents of an array
 * @a: array to reverse
 * @n: number of elements in a
 */
void reverse_array(int *a, int n)
{
int tmp;
int i;

for(i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
