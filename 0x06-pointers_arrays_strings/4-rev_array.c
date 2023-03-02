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
int i, temp;
int end = n - 1;  

for(i = 0; i < n / 2; i++)  
{
temp = a[i];  
a[i] = a[end];  
a[end] = temp;  
end--;  
}  	
}
