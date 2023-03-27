#include "main.h"
/**
* rand_pwd - generates a random valid password for 101-crackme program
*
* Return: pointer to the generated password string
*/
char *rand_pwd(void)
{
char *pwd = NULL;
int i, r, sum;
srand(time(NULL));
pwd = malloc(100);
if (pwd == NULL)
return (NULL);
for (i = 0, sum = 0; sum < 2772 - 122; i++)
{
r = rand() % 62;
if (r < 10)
pwd[i] = '0' + r, sum += pwd[i];
else if (r < 36)
pwd[i] = 'a' + r - 10, sum += pwd[i];
else
pwd[i] = 'A' + r - 36, sum += pwd[i];
}
pwd[i++] = 2772 - sum - 1;
pwd[i] = '\0';
return (pwd);
}
