#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
int n;
srand(time(NULL));
n = rand() - RAND_MAX / 2;
printf("%d ", n);    
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");      
printf("\n");
return 0;
}
