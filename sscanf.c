#include <stdio.h>


int main(void)  {

char str[] = "Hello 1968 This is 45";

int i, j;
char st[16];

sscanf(str, "%s %d %*s %*s %d", st, &i, &j);

printf("String: %s \n", st);
printf("Number: %d \n", i);
printf("Number: %d \n", j);


return 0;
}
