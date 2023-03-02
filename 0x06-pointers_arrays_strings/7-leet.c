/**
 * leet - encode string to 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
char chs[] = { 'a', 'e', 'o', 't', 'l' };
char nums[] = { 4, 3, 0, 7, 1 };
int i = 0;

while (*s)
{
for (i = 0; i < 5; i++)
{
if (*s == chs[i] || *s == chs[i] - 32)
	*s = nums[i] + '0';
}
s++;
}
return (s);
}

