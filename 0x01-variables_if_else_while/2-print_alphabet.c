#include <stdio.h>
int main() {
char c = 'a';
do {
putchar(c);
c++;
} while(c <= 'z');
putchar('\n');
return 0;
}
