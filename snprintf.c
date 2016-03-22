#include <stdio.h>


int main(void) {

char str[32];
int i, j;

i=12;
j=54;

snprintf(str, 32, "First: %d and Second: %d", i, j);

printf("Text is: <%s> \n", str);

return 0;
}
