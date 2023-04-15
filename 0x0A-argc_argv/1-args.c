#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
/* Avoid unused variable warning with (void) casting */
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
