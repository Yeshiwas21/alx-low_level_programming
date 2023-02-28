#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
char passwd[84];
int i = 0;
int sum = 0;
int half1, half2;
srand(time(0));

while (sum < 2772)
{
passwd[i] = 33 + rand() % 94;
sum += passwd[i++];
}
passwd[i] = '\0';

if (sum != 2772)
{
half1 = (sum - 2772) / 2;
half2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
half1++;
for (i = 0; passwd[i]; i++)
{
if (passwd[i] >= (33 + half1))
{
passwd[i] = passwd[i] - half1;
break;
}
}
for (i = 0; passwd[i]; i++)
{
if (passwd[i] >= (33 + half2))
{
passwd[i] = passwd[i] - half2;
break;
}
}
}
printf("%s", passwd);
return (0);
}

