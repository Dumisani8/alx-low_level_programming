#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
default:
i++;
continue;
}
if (format[i + 1] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(args);
}
