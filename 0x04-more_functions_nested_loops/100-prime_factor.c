#include <stdio.h>i

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
unsigned long long n = 612852475143;
unsigned long long i;

for (i = 2ULL; i < n; i++)
{
while (n % i == 0)
{
n /= i;
}
}
printf("%llu\n", n);
return (0);
}
