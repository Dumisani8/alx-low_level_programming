#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 98 on failure
*/
int _isdigit(char *str);
void _puts(char *str);
void _print_number(char *num);
void _mul(char *num1, char *num2);
int main(int argc, char *argv[])
{
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
_puts("Error");
exit(98);
}
_mul(argv[1], argv[2]);
return (0);
}
int _isdigit(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if (str[i] < '0' || str[i] > '9')
return (0);
}
return (1);
}
void _puts(char *str)
{
while (*str)
{
putchar(*str);
str++;
}
putchar('\n');
}
void _print_number(char *num)
{
while (*num == '0')
num++;
if (*num == '\0')
putchar('0');
while (*num)
putchar(*num++);
}
void _mul(char *num1, char *num2)
{
int len1, len2, i, j, k, carry, res;
char *result;
len1 = strlen(num1);
len2 = strlen(num2);
result = malloc(len1 + len2 + 1);
if (!result)
{
_puts("Error");
exit(98);
}
for (i = 0; i < len1 + len2; i++)
result[i] = '0';
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
res = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
carry = res / 10;
result[i + j + 1] = (res % 10) + '0';
}
result[i + j + 1] += carry;
}
_print_number(result);
free(result);
}
