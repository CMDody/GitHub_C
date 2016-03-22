#include <stdio.h>


int main(void)  {

char str[32];
int i, j;

i=12;

j=54;

sprintf(str, "The first: %d and second %d", i, j);

printf("Text is: <%s> \n", str);


return 0;
}
