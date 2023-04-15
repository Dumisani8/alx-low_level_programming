#ifndef MAIN_H
#define MAIN_H
/* isupper function */
int _isupper(int c);
#endif /* MAIN_H */
/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
