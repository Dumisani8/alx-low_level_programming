#include <stdio.h>
#include "main.h"
/**
* fizzbuzz - Prints the numbers from 1 to 100, replacing multiples of 3 with
*            "Fizz", multiples of 5 with "Buzz", and multiples of both with
*            "FizzBuzz", followed by a new line.
*/
void fizzbuzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n"); /* print newline */
}
