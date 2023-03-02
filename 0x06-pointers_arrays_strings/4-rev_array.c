#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
int i, j, temp, *result;
result = a;

for (j = 1; j < n; j++)
	result++;
for(i = 0; i < j / 2; i++)  
{
temp = a[i];  
a[i] = *result;  
*result = temp;  
result--;  
}  	
}
