#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
(void)argc; /* Suppress unused parameter warning */
printf("%s\n", argv[0]);
return (EXIT_SUCCESS);
}
