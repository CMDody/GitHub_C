#include <stdio.h>


int main(int argc, char** argv) {

int a=12;
int *p, **q;

p=&a;
q=&p;

for(int i=0;i<argc;i++) {
printf("%s ", *(argv + i));
}
printf("\n");

printf("Value is ---> %d \n", **q);

return 0;
}
